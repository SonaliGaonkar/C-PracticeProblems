#include <iostream>

int main(){
    double num_double = 56.32;
    int num_int;

    //implicit conversion of double to int
     num_int = num_double;

    std::cout << "Value of double is : " << num_double << "\n";
    std::cout << "Value of int is : " << num_int <<"\n";
    return 0;
}