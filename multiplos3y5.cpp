#include <iostream>

int main(void)
{
    int suma = 0;
    int m = 0;
    for(m=1 ; m<1000 ; m=m+1) {
    if  ((m%3 == 0) ||  ( m%5 == 0)) {

        suma += m;
    }}
        std::cout << suma << "\n";



    return 0;

}
