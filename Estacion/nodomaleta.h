#ifndef NODOMALETA_H
#define NODOMALETA_H
#include "Nodo.h"

class NodoMaleta:public Nodo
{
public:
    NodoMaleta();
    double peso;
    QString ubicacion;
    QString tipo;
};

#endif // NODOMALETA_H
