//
// Created by rbara on 04/08/2017.
//

#ifndef SOLUCIONTAREA2_LAB_LOTIFICADORA_H
#define SOLUCIONTAREA2_LAB_LOTIFICADORA_H

#include "Terrenos.h"
#include <iostream>
using namespace std;
class Lotificadora
{
    Terreno terreno[10];
    string name_lot;
    int terrenoVendido;
    int ultimoTerrenoVend;//Esta es la posicion dentro del arreglo

public:
    string getNomLot();
    Lotificadora();
    string setNombreLot(string );
    void addTerreno(float);
    int getTotTerrenoVend();
    float getCostoTotTerreno();
};

Lotificadora::Lotificadora()
{
    name_lot = "";
    terrenoVendido = 0;
    ultimoTerrenoVend = -1;
}

string Lotificadora::setNombreLot(string name)
{
    this->name_lot=name;
}

string Lotificadora::getNomLot()
{
    return this->name_lot;
}
void Lotificadora::addTerreno(float varas_cuad)
{
    if(ultimoTerrenoVend >= 10)//Limite de venta
    {
        cout<<"Limite de venta de terrenos"<<endl;
    } else
    {
        terreno[terrenoVendido].setVaras(varas_cuad);
        terrenoVendido++;
        ultimoTerrenoVend++;
        cout<<"\tTerreno adicional"<<endl;
    }
}
int Lotificadora::getTotTerrenoVend()
{
    return this->terrenoVendido;
}
float Lotificadora::getCostoTotTerreno()
{
    float costo_toal =0;
    for (int i = 0; i <terrenoVendido ; ++i) {
        costo_toal+=terreno[i].getPrecio();
    }
    return costo_toal;
}



#endif //SOLUCIONTAREA2_LAB_LOTIFICADORA_H
