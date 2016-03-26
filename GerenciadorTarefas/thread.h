#ifndef THREAD_H
#define THREAD_H


/*
  Class Thread e a classe base que devera ser herdada por outras classes
  c++ dicas: se em uma classe existir pelo menos um metodo virtual puro
  a classe sera considerada abstrata e dessa forma nao podera ser instan-
  ciada.
*/


#include <pthread.h>
#include <QObject>

class Thread: public QObject
{
    Q_OBJECT
protected:
    //Funcao auxiliar da Thread
    static void* funcaoHelper (void*);

    //POSIX thread da classe
    pthread_t thread;

public:
    //Construtor
    Thread();

    //Destrutor virtual.
    virtual ~Thread();

    //Metodo virtual puro
    virtual void run() = 0;

    //Metodo deve ser executado para iniciar a thread
    int start();

    //Bloqueia ate thread ser finalizada
    int wait ();

    //Retornar o thread da classe
    //Lembrando que um metodo  const nao pode modificar atributos da classe
    pthread_t getThread (void) const;
};

#endif // THREAD_H
