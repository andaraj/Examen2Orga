#ifndef KID_H
#define KID_H
#include <iostream>
#include <list>
#include "gift.h"
#include "nodo.h"

using namespace std;
template <typename Tipo>
class Kid
{
public:
    Nodo <Tipo>* inicio;

    string nombre;
    int SePortoBien;
    list<Gift>regalos;
    int latitud;
    int longitud;
    int edad;
    Kid(string nombre, int SePortoBien, list<Gift>regalos, int latitud, int longitud, int edad);
};

#endif // KID_H
