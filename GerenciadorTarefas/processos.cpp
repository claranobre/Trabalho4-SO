#include "processos.h"
#include <QtCore>
#include <iostream>
#include <unistd.h>

Processos::Processos()
{
    dir.setPath("/proc");
}

/*Processos::~Processos()
{

}
*/
void Processos::setProcList(){
    QStringList filters("*[0-9]");
    dir.setNameFilters(filters);
    dir.setFilter(QDir::Dirs);
    procList = dir.entryList();
}

bool Processos::abrirArquivo(QString fileName){
    bool test;
    dir.cd(fileName);
    statusFile.setFileName(dir.absoluteFilePath("status"));
    if (statusFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        fileInfo = statusFile.readAll();
        dir.cdUp();
        test = true;
    }
    else
        test = false;
    statusFile.close();
    return test;
}

void Processos::run(){
    //std::cout <<" chamou o run \n";
    //ENTRANDO EM CADA PASTA DE PROCESSO E PEGANDO OS DADOS DO ARQUIVO STATUS
    numThreads = 0;
    setProcList();
    numProcessos = procList.count();

    QStringList statusLines, attrib;
    QString key, value;
    QFile users("users.txt");
    for (int i = 0; i < procList.size(); i++){
        statusLines.clear();
        attrib.clear();
        hash.clear();
        if (abrirArquivo(procList.at(i))){
               statusLines = fileInfo.split("\n");          //Separando cada linha de "status" e criando uma lista com cada linha;
               for (int j = 0; j < statusLines.size()-1; j++){
                   attrib = statusLines.at(j).split(":"); //SEPARANDO IDENTIFICADOR E DADO
                   key = attrib.at(0).trimmed();
                   value = attrib.at(1).trimmed();
                   hash.insert(key, value);
               }
        }
        contextSwitches = hash.value("voluntary_ctxt_switches").toInt() + hash.value("nonvoluntary_ctxt_switches").toInt();
        value.setNum(contextSwitches);
        hash.insert("ContextSwitches", value);
        numThreads += hash.value("Threads").toInt();

        value = (hash.value("Uid").split(QRegExp("\\s+"))).at(0);
        QString command = "getent passwd ";
        command += value + " | cut -d: -f1 > users.txt";
        system(qPrintable(command));
        if (users.open(QIODevice::ReadOnly | QIODevice::Text))
            value = users.readLine();
        users.close();
        hash.insert("Uid", value);

        emit processInfo(hash);

      }

}

int Processos::getNumProcessos(){
    return numProcessos;
}

int Processos::getNumThreads(){
    return numThreads;
}

/*int Processos::finalizarProcesso(QString pid){
    kill(pid, SIGKILL);
}
*/
