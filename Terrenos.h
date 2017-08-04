//
// Created by rbara on 04/08/2017.
//

#ifndef SOLUCIONTAREA2_LAB_TERRENOS_H
#define SOLUCIONTAREA2_LAB_TERRENOS_H
class Terreno
{
    float varas_cuad;
public:
    Terreno();
    void setVaras(float);

    float getVaras();
    float getMetros();
    float getPrecio();
};
Terreno::Terreno()
{
    this->varas_cuad=0;

}
void Terreno::setVaras(float varas)
{
    this->varas_cuad=varas;
}
float Terreno::getVaras()
{
    return this->varas_cuad;
}
float Terreno::getMetros()
{
    return this->getVaras()*0.6987;
}

float Terreno::getPrecio()
{
    return this->getMetros()*80;//80 dolares por metro cuadrado
}





#endif //SOLUCIONTAREA2_LAB_TERRENOS_H
