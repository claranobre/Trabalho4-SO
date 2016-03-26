#ifndef PROCESSOS_H
#define PROCESSOS_H

#include "thread.h"
#include <QDir>
#include <QFile>
#include <QHash>
#include <QtCore>

class Processos: public Thread{
    Q_OBJECT
public:
    Processos();
    //~Processos();
    void run();
    bool abrirArquivo(QString);
    void setProcList();
    int getNumProcessos();
    int getNumThreads();

private:
    QDir dir;
    QFile statusFile;
    QString fileInfo;
    QStringList procList;
    QHash<QString, QString> hash;
    int contextSwitches, numThreads, numProcessos;

signals:
    void processInfo(QHash <QString, QString>);
};

#endif // PROCESSOS_H
