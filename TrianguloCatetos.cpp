/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 16 de marzo de 2021, 08:28 PM
 */

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

class TrianguloCatetos{
private: 
    int cateto1;
    int cateto2;
public:
    void obtener();
    float hipotenusa();
    float perimetro();
    float area();
    TrianguloCatetos();
    ~TrianguloCatetos();
};
//Constructor 
TrianguloCatetos::TrianguloCatetos(){

}
//Destructor
TrianguloCatetos::~TrianguloCatetos(){

}
void TrianguloCatetos::obtener(){
    cout<< "Ingrese el valor del cateto 1: " <<endl;
    cin>> cateto1;
    cout<< "Ingrese el valor del cateto 2: " <<endl;
    cin>> cateto2;
}
float TrianguloCatetos::hipotenusa(){
    float hip=0, res=0;
    hip=(cateto1*cateto1)+(cateto2*cateto2);
    res= sqrt(hip);
    return res;
}
float TrianguloCatetos::area(){
    float a=0;
    a=cateto1*cateto2/2;
    return a;
}
float TrianguloCatetos::perimetro(){
    float hip=0, peri=0;
    hip=(cateto1*cateto1)+(cateto2*cateto2);
    peri=cateto1+cateto2+sqrt(hip);
    return peri;
}
int main(int argc, char** argv) {

    TrianguloCatetos objeto1;
    
    objeto1.obtener();
    
    cout << "El valor de la hipotenusa es: " << objeto1.hipotenusa() << endl;
    cout << "El valor del perimetro es: " << objeto1.perimetro() << endl;
    cout << "El valor del área es: " << objeto1.area() << endl;
    return 0;
}