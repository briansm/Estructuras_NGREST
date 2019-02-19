#include "cola.h"

cola::cola()
{
    primeroC = NULL;
    ultimoC = NULL;
}

void cola::insertar_nodo_recurso(datos_recurso recurso_aux)
{
    nodoC* tempC=new nodoC();//creamos el nodo, para manipular los nodos
    tempC->recurso_nuevo=recurso_aux;//le asignamos, al puntero temporal, el valor del parametro
    if(primeroC==NULL){// si el primer nodo esta vacío
        primeroC=tempC;
        primeroC->siguienteC=primeroC;
        ultimoC=primeroC;
    }
    else// si por lo menos existe un nodo.
    {
        ultimoC->siguienteC=tempC;
        tempC->siguienteC=primeroC;
        ultimoC=tempC;
    }

}
