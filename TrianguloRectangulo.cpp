/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 16 de marzo de 2021, 08:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class TrianguloR{
private: 
    int base;
    int altura;
public:
    void obtener();
    float perimetro();
    float area();
    TrianguloR();
    ~TrianguloR();
};
//Constructor 
TrianguloR::TrianguloR()
{

}
//Destructor
TrianguloR::~TrianguloR()
{

}
void TrianguloR::obtener(){
    cout<< "Ingrese la base del triángulo rectángulo: " <<endl;
    cin>> base;
    cout<< "Ingrese el altura del triángulo rectángulo: " <<endl;
    cin>> altura;
}
float TrianguloR::perimetro(){
    float hip=0, p=0;
    hip=(base*base)+(altura*altura);
    p=base+altura+sqrt(hip);
    return p;
}
float TrianguloR::area(){
    float a=0;
    a=base*altura/2;
    return a;
}

int main(int argc, char** argv) {

    TrianguloR objeto1;
    
    objeto1.obtener();
    
    cout << "El perimetro del triángulo rectángulo es: " << objeto1.perimetro() <<endl;
    cout << "El área del triángulo rectángulo es: " << objeto1.area() <<endl;
    
    
    return 0;
}