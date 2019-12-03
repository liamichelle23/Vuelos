#include <iostream>
#include "Vuelo.hpp"
#include <vector>
using namespace std;

class Aerolinea{
    private:
        string nombre;
        vector<Vuelo> todosVuelos; //Se hace un vector de Vuelos
        
    public:
        
        Aerolinea(){
            nombre="";
        }
        Aerolinea(string _nombre, int _cantidadVuelos ){
            nombre=_nombre; 
        }

        void setNombre(string nombre, string _nombre){
            nombre=_nombre;
        }

        string getNombre(){
            return nombre;
        }


        vector<Vuelo> getVuelos(){
            return todosVuelos;
        }

        int getCantidadVuelos(){
            return todosVuelos.size();
        }

    
};