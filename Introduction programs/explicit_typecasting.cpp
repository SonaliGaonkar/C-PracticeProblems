#include <iostream>

int main()
{
    int a = 31;
    int b = 6;

    double c = a/b;
    double d = (double)a/b; //explicit type-casting of int values into float

    std::cout << "Simple Division     : " << c <<"\n";
    std::cout << "Explicit conversion : " << d ;
    return 0;
}