#include <iostream>
#include "Aerolinea.hpp"
#include <ctime>
using namespace std;

//Se declara la longitud de los arreglos de cuántos vuelos habrán por mes, terminal, destino y aerolinea
int VuelosPorMes[12]={0};
int VuelosPorTerminal[2]={0};
int VuelosPorDestino[55]={0};
int VuelosPorAerolinea[21]={0};

int main(void){ 
    srand(rand()*time(0)); 
    //Por cada aerolínea se crea un vector de Vuelo
    for(int i = 0; i < 21; i++){
        vector<Vuelo> vuelos;
        //A cada vector de Vuelo, se le agregan los datos de un vuelo,
        //se obtiene el mes, la terminal, destino y aerolinea y se van sumando a sus arreglos correspondientes
        for (int j = 0; j < rand()%25; j++){
            vuelos.push_back(Vuelo()); 
            VuelosPorMes[vuelos[j].getMes()]++;
            VuelosPorTerminal[vuelos[j].getTerminal()]++;
            VuelosPorDestino[vuelos[j].getDestino()]++;
            VuelosPorAerolinea[vuelos[j].getAerolinea()]++;
        }
    }
    //Se imprime cuántos vuelos hay en cada mes. Se utiliza como contador la variable k, que representa el número de meses
    for(int k=0; k<12;k++ ){
        cout << "Vuelos en el mes " << k+1 << ": " << VuelosPorMes[k]<< endl;
    }
    cout << endl;

    //Se imprime cuántos vuelos hay por terminal. Se utiliza la vasriable x que representa el número de terminales.
    for(int x=0;x<2;x++){
        cout << "Vuelos en la terminal " << x+1 << ": " << VuelosPorTerminal[x]<<endl;
    }
    
    //Se determina cuál terminal tiene una mayor cantidad de vuelos y se imprime.
    if (VuelosPorTerminal[0]>VuelosPorTerminal[1]){
            cout << "Hay más vuelos en la Terminal 1."<<endl;
        }
        else{
            cout <<"Hay más vuelos en la Terminal 2." <<endl;
        }
    cout <<endl;

    //Se imprime cuántos vuelos hay hacia cada destino. Hasta 55 porque hay 55 destinos posibles. 
    for(int y=0;y<55; y++){
        cout <<"Vuelos hacia el destino " << codigosDestinos[y] << ": " << VuelosPorDestino[y]<<endl;
    }

    cout <<endl;

    //Se imprime cuántos vuelos hay por aerolínea, hay 21 aerolíneas disponibles.
    for(int a=0;a<21;a++){
        cout<<"Vuelos de la aerolínea " << aerolineasNombres[a] << ": " << VuelosPorAerolinea[a]<<endl;
    }

    return 0;
};