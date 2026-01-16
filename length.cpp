#include "length.h"
#include <iostream>
using namespace std;

Meters::Meters(){
    M = 0.0;
}
Meters::Meters(float Meters){
    M = Meters;
}

 Meters::Meters(Feet& otherF){
    M = otherF.getF() * 0.3048;
}
void Meters::display(){
    cout <<fixed<<setprecision(2);
    cout << "Length in Meters: " << M << "m" << endl;
}



Feet::Feet(){
    F = 0.0;
}
Feet::Feet(float Feet){
    F = Feet;
}
Feet::Feet(Meters& otherM){
    F = otherM.getM() / 0.3048;
}
void Feet::display(){
    cout <<fixed<<setprecision(2);
    cout << "Length in Feet: " << F << "ft" << endl;
}
