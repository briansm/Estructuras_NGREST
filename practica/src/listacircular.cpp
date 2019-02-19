#include "listacircular.h"

listacircular::listacircular()
{
    primero = NULL;
    ultimo = NULL;
}

void listacircular::insertar_nodo(datos_usuario usuario_aux)
{
    nodo* temp=new nodo();//creamos el nodo, para manipular los nodos
    temp->usuario_nuevo=usuario_aux;//le asignamos, al puntero temporal, el valor del parametro
    if(primero==NULL){// si el primer nodo esta vacío
        primero=temp;
        primero->siguiente=primero;
        ultimo=primero;
    }
    else// si por lo menos existe un nodo.
    {
        ultimo->siguiente=temp;
        temp->siguiente=primero;
        ultimo=temp;
    }

}


