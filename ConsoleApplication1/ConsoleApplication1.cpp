#include <iostream>
#include <stdlib.h> 

//https://cplusplus.com/doc/tutorial/classes/

class Car {
    int a, b;
public:
    int size(int, int);
};

int Car::size(int, int)
{
    return 33;
}


double addition(double a, double b);


int main()
{

    std::cout << "Hello World! 3 \n";

    double x = addition(1.3, 3.1);
    std::cout <<"the addition results in "<< x;


    Car volvo;
    int d = volvo.size(1, 2);
    std::cout << "the car results in " << d;

    return 0;
}


double addition(double a, double b)
{
    return a + b;
}
 

