#ifndef LISTA_H
#define LISTA_H
#include <Nodo.h>
#include <QDebug>

class Lista
{
public:
    Lista();
    Nodo *actual;
    Nodo *cabeza;
    Nodo *cola;
    Nodo *aux;

    void agregar(Nodo *p)
    {
        if(!cabeza)
                {
                    cabeza =p;
                    actual=p;
                    cola=p;
                    cabeza->anterior =NULL;
                    cabeza->siguiente=NULL;
                    cola->anterior =NULL;
                    cola->siguiente=NULL;
                    actual->anterior =NULL;
                    actual->siguiente=NULL;
                    qDebug()<<cabeza->id;
                }
                else
                {
                    actual = cabeza;
                    while( actual->siguiente != NULL ) actual = actual->siguiente;
                    actual->siguiente = p;
                    p->anterior=actual;
                    qDebug()<<"voy aqui";

                }

    }


};

#endif // LISTA_H
