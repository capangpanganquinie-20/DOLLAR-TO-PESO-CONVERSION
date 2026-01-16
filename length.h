#ifndef LENGTH_H_INCLUDED
#define LENGTH_H_INCLUDED

//comment for demo - kwekwek

#include <iostream>
#include<iomanip>
using namespace std;

class Feet;

class Meters{
private:
    float M;

public:
   Meters();
   Meters(float);
   Meters(Feet&);

    float getM(){return M;};
    void display();

};

class Feet{
private:
    float F;

public:
   Feet();
   Feet(float);
   Feet(Meters&);

    float getF(){return F;};
    void display();

};

#endif // LENGTH_H_INCLUDED
