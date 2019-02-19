/*#ifndef COLA_H
#define COLA_H
#include <iostream>

using namespace std;

struct recurso
{
    std::string dominio;
    std::string contenido;

};

typedef recurso datos_recurso;

struct nodo
{
    datos_recurso recurso_nuevo;
    nodo* siguienteC;

};

class cola
{
    public:
        colacircular();
        nodo *primeroC,*ultimoC;
        void insertar_nodo_recurso(datos_recurso recurso_nuevo);
        void desplegar_recurso();
        

//    protected:
//
//    private:
};

#endif // COLA_H
*/