/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 11 de marzo de 2021, 10:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones {
private:
    float Num1;
    float Num2;
public:
    void obtenernum();
    int suma();
    int resta();
    int mult();
    float div();
};

void Operaciones::obtenernum(){
    cout << "Dame el primer número" << endl;
    cin >> Num1;
    cout << "Dame el segundo número" << endl;
    cin >> Num2; 
}

int Operaciones::suma(){
    int res=0;
    res = Num1+Num2;
    return res;
}
int Operaciones::resta(){
    int res=0;
    res = Num1-Num2;
    return res;
}
int Operaciones::mult(){
    int res=0;
    res = Num1*Num2;
    return res;
}
float Operaciones::div(){
    float res=0;
    res = Num1/Num2;
    return res;
}
int main(int argc, char** argv) {

Operaciones Res1; // objeto definido   

Res1.obtenernum();

cout << "El resultado de la suma es: " << Res1.suma() << endl;
cout << "El resultado de la resta es: " << Res1.resta() << endl;
cout << "El resultado de la multiplicación es: " << Res1.mult() << endl;
cout << "El resultado de la división es: " << Res1.div() << endl;

    return 0;
}