#include <iostream>
#include "Lotificadora.h"
using namespace std;

int main() {
    Lotificadora miLot;
    int opc =-1;
    do {
        cout << "\t\tSISTEMA DE VENTA DE TERRENOS(LOTIFICADORA)" << endl;
        cout << "\t1.- Adicionar Terreno" << endl;
        cout << "\t2.- Obtener total de terrenos vendidos" << endl;
        cout << "\t3.- Ingresar el nombre de la lotificadora" << endl;
        cout << "\t4.- Obtener el nombre de la lotificadora" << endl;
        cout << "\t5.- Obtener costo total de terrenos" << endl;
        cout << "\n\t-1 ára salir del menu"<<endl;
        cin>>opc;

        if(opc==1)
        {
            float varas;
            cout<<"ingrese las varas cuadradas: ";
                cin>>varas;
            miLot.addTerreno(varas);
        }else if(opc==2)
        {
            cout<<"\n\n\n\tTotal de terrenos vendidos: "<<miLot.getTotTerrenoVend();

        }else if(opc==3)
        {
            string name;
            cout<<"Ingrese el nombre de la Lotificadora: ";
            cin>>name;
            miLot.setNombreLot(name);
        }else if(opc==4)
        {
            cout<<"El nombre de la Lotificadora es: "<<miLot.getNomLot();
        }else if(opc==5)
        {
            cout<<"El Costo total de los terrenos es: "<<miLot.getCostoTotTerreno();
        } else
        {
          cout<<"Gracias por usar nuestra Lotificadora!!!!!"<<endl;
        }

    }while(opc !=-1);


    return 0;
}