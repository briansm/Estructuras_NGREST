#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <iostream>

using namespace std;


struct usuario
{
    std::string id;
    std::string nombre;
    std::string correo;
    std::string fecha;
};
typedef usuario datos_usuario;

struct nodo
{
    datos_usuario usuario_nuevo;
    nodo* siguiente;

};




class listacircular
{
    public:
        listacircular();
        nodo *primero,*ultimo;
        void insertar_nodo(datos_usuario usuario_nuevo);
        void desplegar();
        void buscar_nodo();
        void ordenar_nodos();

//    protected:
//
//    private:
};

#endif // LISTACIRCULAR_H
