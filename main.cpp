#include <QCoreApplication>
#include <iostream>
#include <list>
#include "kid.h"
#include "gift.h"
#include "menu.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   int op;
   Menu m;
   m.ImprimirMenu();
    cin>>op;
    switch (op) {
    case 1:
       //llamar funcion agregar niño
        cout<<"hola mundo"<<endl;
        break;
    case 2:
        //llamar funcion agregar regalos
        break;
    case 3:
        // llamar funcion buscar
        break;
    case 4:
        exit(0);
        break;
    default:
        cout<<"Opcion no valida!"<<endl;
        break;
    }
    return a.exec();
}

