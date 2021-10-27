#include<iostream>

int main()
{
    float x;
    bool y=false;
    double m= 0.009;
    float n=1.0e40;

    std::cout << "x=" << x << "\n" ;
    std::cout << "y=" << y << "\n" ;
    std::cout << "m=" << m << "\n" <<&m << "\n" << sizeof(double) << "\n" ;
    std::cout << "n=" << n << "\n" ;
    return 0;
    //La variable n da ese resultado porque el número que debe imprimir se sale del límite de números posibles de imprimir que se le han asignado. Lo cuales van de 10e-45 a 10e38. Aunque eso es distinto a su precisión que es de 10e-6, que es la cantidad de decimales que puede inscribir//
}
