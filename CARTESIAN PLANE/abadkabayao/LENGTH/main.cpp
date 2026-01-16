#include <iostream>
#include "length.h"
using namespace std;

int main()
{
    Meters meter_obj(10);                // 10 meters
    meter_obj.display();

    Feet feet_obj;                       // Wil hold feet value
    feet_obj = meter_obj;                // convert Meters to Feet
    feet_obj.display();

    Feet another_feet_obj(15);           // 15 meters
    another_feet_obj.display();

    Meters another_meter_obj;            //Will hold meter value
    another_meter_obj = another_feet_obj; //convert Feet to Meters
    another_meter_obj.display();

    return 0;
}
