#include <iostream>  
#include <limits> 

Struct house 
{
    int noBedrooms;
    int noBathrooms;
    double sqfeet;
    double price;
    std::string style;
}

int main() 

{
    house myHouse;
    myHouse.noBedrooms = 3;
    myHouse.noBathrooms = 2;
    myHouse.sqfeet= 1894;
    myHouse.price= 1000000;
    myHouse.style= "weird"
}

