#include <iostream>
#include <cstdlib>
#include "data.hpp"
using namespace std;

class Vuelo{
       
    public:
        int mes;
        int terminal;
        int salida;
        int destino;
        int aerolinea;
        int id;

        Vuelo(){
            
            id=rand()%10000+1; //Se tiene un id aleatorio por vuelo
            mes= rand()%12; //Hasta 12 porque un año tiene 12 meses
            terminal=rand()%2; //Puede ser terminal 1 o 2
            salida=rand()%55+1; //Un número aleatorio hasta el 55 porque el arreglo de códigos de aeropuertos en data.hpp tiene 55
            destino=55 - salida; //Se asegura que el destino no sea igual a la salida
            aerolinea=rand()%21; //Hasta el 25 porque el arreglo de aerolíneas en data.hpp tiene 25 datos

        }

        int getMes(){
            return mes; //Se guarda un mes aleatorio del 1 al 12
        }
        
        int getID(){
            return id; //Regresa el id del vuelo
        }

        int getAerolinea(){
            return aerolinea; //el arreglo aerolineasNombres está en data.hpp y se busca la posición equivalente al valor de la variable aerolinea
        }

        string getSalida(){
            return codigosDestinos[salida]; //Regresa el aeropuerto de salida
        }

        int getDestino(){
            return destino; //Regresa el aeropuerto de destino
        }

        int getTerminal(){
            return terminal; //Regresa la terminal de la cual sale el vuelo
        }


        
};