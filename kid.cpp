#include "kid.h"
#include <list>
#include "gift.h"


Kid::Kid(string nombre, int SePortoBien,list<Gift> regalos, int latitud, int longitud, int edad)
{
    this->nombre=nombre;
    this->SePortoBien=SePortoBien;
    this->latitud=latitud;
    this->longitud=longitud;
    this->edad;
    inicio=NULL;
    regalos.push_back(&inicio);
}

/*void Buscarniño(string nombre){
 * dado que el nombre no se puede repetir el buscar niño solo se necesitara el nombre y nada mas
 * se lee el arbol b de niños y con el hash se comprueba el valor del string si este coincide con un valor dentro del arbol se leen los datos
 * del nodo y se comprueba el valor de SePortoBien para actualizar la cantidad de regalos o carbon, en caso de que el regalo no sea apto para su edad se llama la funcion borrar y se elimina el regalo de la lista
 *
 * }

 * /

/*void agregarRegalo(string nombre){
 llama a la funcion buscar niño, si el niño existe se manda a llamar la funcion fibogift la cual asigna la cantidad de regalos o si el niño recibira carbon
 despues de comprobar si el niño existe y la cantidad de regalos/carbon se actualiza en el arreglo de niños,
}
*/

/*void AgregarNiño(string nombre, int SePortoBien,list<Gift> regalos, int latitud, int longitud, int edad){
 * con la funcion hash comprobamos que el nombre del niño no coincida con uno agregado al arbol, en caso de repetirse el niño no se agregara
 *
 * }
 * /
