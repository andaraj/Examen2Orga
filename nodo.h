#ifndef NODO_H
#define NODO_H

template <typename Tipo>

class Nodo
{
public:

    Tipo valor;
    Nodo*sig;
    Nodo(Tipo valor);
};

#endif // NODO_H
