/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 16 de marzo de 2021, 08:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class Sueldo{
private: 
    float Mes;
    int Ventas;
public:
    void Obtener();
    float SueldoN();
    Sueldo();
    ~Sueldo();
    
};
//Constructor 
Sueldo::Sueldo(){

}
//Destructor
Sueldo::~Sueldo(){

}
void Sueldo::Obtener(){
    cout <<"Ingrese la cantidad de su sueldo mensual del empleado: ";
    cin >> Mes;
    cout <<"Ingrese el número de ventas mesuales realizadas por el empleado: ";
    cin >> Ventas;
}
float Sueldo::SueldoN(){
    float sueldoventas=0, iva=0, sueldofinal=0;
    sueldoventas = (Mes*0.04*Ventas)+Mes;
    iva = sueldoventas*0.16;
    sueldofinal = sueldoventas-iva;
    return sueldofinal;
}
int main(int argc, char** argv) {
    
    Sueldo Empleado1;
    
    Empleado1.Obtener();
    
    cout << "El sueldo neto del empleado es: " << Empleado1.SueldoN() << endl;

    return 0;
}
