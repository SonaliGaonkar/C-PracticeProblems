#include <iostream>

struct employee
{
    char name[50];
    int age;
    char address[20];
    float salary;
};
int main()
{
    employee e1;
    std::cout << "Enter name of employee : ";
    std::cin.get(e1.name, 50);
    std::cout << "\nEnter age of employee : ";
    std::cin >> e1.age;
    std::cout << "\nEnter address of employee : ";
    std::cin >> e1.address;
    std::cout << "\nEnter salary of employee : ";
    std::cin >> e1.salary;

    std::cout << "\nName of employee : " << e1.name;
    std::cout << "\nAge of employee : " << e1.age;
    std::cout << "\nAddress of employee : " << e1.address;
    std::cout << "\nSalary of employee : " << e1.salary;
    return 0;
}