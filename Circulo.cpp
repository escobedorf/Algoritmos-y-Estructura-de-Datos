/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 16 de marzo de 2021, 08:58 PM
 */

#include <cstdlib>
#include <iostream>
#define pi 3.1416 


using namespace std;
class Circulo
{
private:
    float radio;
public:
    void obtener();
    float diametro();
    float perimetro();
    float area();
    Circulo();
    ~Circulo();
    
};
//Constuctor
Circulo::Circulo()
{

}
//Destructor
Circulo::~Circulo()
{

}
void Circulo::obtener()
{
    cout<<"Ingresael radio: "<<endl;
    cin>>radio;
}
float Circulo::diametro()
{
    float d;
    d=radio*2;
    return d;
}
float Circulo::perimetro()
{
    float p;
    p=pi*diametro();
    //p=pi*(2*radio)
    return p;
}
float Circulo::area()
{
    float a;
    a=pi*radio*radio;
    return a;
}
int main(){
    Circulo objeto1;
    int opc;
    float resultado;
    
    cout<<"*****Circulo*****"<<endl;
    cout<<"1. Diametro"<<endl;
    cout<<"2. Perimetro"<<endl;
    cout<<"3. Area"<<endl;
    cout<<"Elige una opcion"<<endl;
    cin>>opc;
    switch (opc)
    {
    case 1:
        {
            objeto1.obtener();
            resultado=objeto1.diametro();
            cout<<"El diametro es: "<<resultado<<endl;
            break;
        }
    case 2:
        {
            objeto1.obtener();
            cout<<"El perimetro es: "<<objeto1.perimetro()<<endl;
            break;
        }
    case 3:
        {
            objeto1.obtener();
            cout<<"El area es: "<<objeto1.area()<<endl;
            break;
        }
    default:
        {
            cout<<"Opcion no valida"<<endl;
        }
    }
    return 0;
}

