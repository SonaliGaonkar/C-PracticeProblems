/*int* pointVar, var;
var = 5;

// assign address of var to pointVar
pointVar = &var;

// access value pointed by pointVar
cout << *pointVar << endl;   // Output: 5

We have used the *pointVar to get the value stored in that address.

When * is used with pointers, it's called the dereference operator.
It operates on a pointer and gives the value pointed by the address stored in the pointer. That is, *pointVar = var.

Note: In C++, pointVar and *pointVar is completely different. We cannot do something like *pointVar = &var;*/
#include <iostream>
int main()
{
    int *pointVar;
    int var;
    var = 5;
    pointVar = &var;
    std::cout << "\nvar : " << var;
    std::cout << "\n&var : " << &var;
    std::cout << "\npointVar : " << pointVar;    
    std::cout << "\n*pointVar : " << *pointVar;
    var = 15;
    std::cout << "\nvar : " << var;
    std::cout << "\n&var : " << &var;
    std::cout << "\npointVar : " << pointVar;    
    std::cout << "\n*pointVar : " << *pointVar;
    
    return 0;
}