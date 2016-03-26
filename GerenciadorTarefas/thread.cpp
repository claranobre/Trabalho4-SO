#include "thread.h"

//Construtor
Thread::Thread(){}

//Destrutor
Thread::~Thread(){}

/*
  Responsavel por chamar a funcao run.
  Apos finalizar o metodo run, a thread
  devera chamar o destrutor
*/

void* Thread::funcaoHelper (void *param)
{
  ( (Thread*) param )->run();
  return 0;
}


/*
  Inicia a thread. Devera ser a primeira funcao
  executada apos o construtor.
  Retorna o codigo de erro da criacao da thread
*/

int Thread::start()
{
  return pthread_create(&thread, NULL, Thread::funcaoHelper,(void*)this);
}


/*
  Funcao que espera pela finalizacao da thread.
  Pode ser chamada para sincronizacao dentro de
  algum procedimento
*/

int Thread::wait()
{
  return  pthread_join (thread, NULL);
}

/*
 Retorna o objeto thread da classe
*/
pthread_t
Thread::getThread() const
{
  return thread;
}
