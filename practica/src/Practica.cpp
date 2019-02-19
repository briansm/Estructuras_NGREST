// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#include "Practica.h"

listacircular lusuario;
cola lrecurso;


std::string Practica::echo(const std::string& text)
{
    return "Hi, " + text;
}


std::string Practica::newuser(datos_usuario_serial user)
{
    
    std::string response="Ingreso EXITOSO";
    datos_usuario manejo_usuario;
    manejo_usuario.id=user.id;
    manejo_usuario.nombre=user.nombre;
    manejo_usuario.correo=user.correo;
    manejo_usuario.fecha=user.fecha;
    lusuario.insertar_nodo(manejo_usuario);
    return response;
}

std::list<datos_usuario_serial> Practica::getuser()
{
    list<datos_usuario_serial> response;
    
    nodo* actual=new nodo();

    actual=lusuario.primero;
    if(actual!=NULL)
    {
        do{
            datos_usuario_serial temp;
            temp.id=actual->usuario_nuevo.id;
            temp.nombre=actual->usuario_nuevo.nombre;
            temp.correo=actual->usuario_nuevo.correo;
            temp.fecha=actual->usuario_nuevo.fecha;
            response.push_back(temp);
            actual=actual->siguiente;
        }
        while(actual!=lusuario.primero);
        
    }
    else
    {
        std::cout<<"La lista se encuentra vacia";
    }
    return response;
}

std::string Practica::newrecurso(datos_recurso_serial recu)
{
    std::string response="Ingreso EXITOSO";
    datos_recurso manejo_recurso;
    manejo_recurso.dominio=recu.dominio;
    manejo_recurso.contenido=recu.contenido;
    lrecurso.insertar_nodo_recurso(manejo_recurso);
    return response;
}


std::list<datos_recurso_serial> Practica::getrecurso()
{
    list<datos_recurso_serial> response;
    
    nodoC* actual=new nodoC();

    actual=lrecurso.primeroC;
    if(actual!=NULL)
    {
        do{
            datos_recurso_serial temp;
            temp.dominio=actual->recurso_nuevo.dominio;
            temp.contenido=actual->recurso_nuevo.contenido;
            response.push_back(temp);
            actual=actual->siguienteC;
        }
        while(actual!=lrecurso.primeroC);
        
    }
    else
    {
        std::cout<<"La lista se encuentra vacia";
    }
    return response;
}