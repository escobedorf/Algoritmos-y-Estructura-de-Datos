/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 11 de marzo de 2021, 10:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones {
private:
    int Num1;
    int Num2;
public:
    void obtenernum();
    void suma();
    void resta();
    void mult();
    void div();
};

void Operaciones::obtenernum(){
    cout << "Dame el primer número" << endl;
    cin >> Num1;
    cout << "Dame el segundo número" << endl;
    cin >> Num2; 
}

void Operaciones::suma(){
    cout << "La suma es: " << Num1+Num2 << endl;
}
void Operaciones::resta(){
    cout << "La resta es: " << Num1-Num2 << endl;
}
void Operaciones::mult(){
    cout << "La multiplicación es: " << Num1*Num2 << endl;
}
void Operaciones::div(){
    cout << "La división es: " << Num1/Num2 << endl;
}
int main(int argc, char** argv) {

Operaciones Res1; // objeto definido   

Res1.obtenernum();

Res1.suma();        
Res1.resta();
Res1.mult();
Res1.div();

    return 0;
}
