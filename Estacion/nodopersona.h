#ifndef NODOPERSONA_H
#define NODOPERSONA_H
#include <QString>
#include "nodomaleta.h"


class NodoPersona:public Nodo
{
public:
    NodoPersona();
    QString nombres;
    QString apellidos;
    double altura;
    double peso;
    QString telefono;
    QString ciudad;

    NodoPersona *anterior;
    NodoPersona *siguiente;
    NodoMaleta *maleta;
};

#endif // NODOPERSONA_H
