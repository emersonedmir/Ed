#ifndef NODO_H
#define NODO_H
#include <QString>


class Nodo
{
    public:
            QString id;
            Nodo *anterior;
            Nodo *siguiente;

            Nodo();


};

#endif // NODO_H
