#include <iostream>

struct Employee
{
    char name[50];
    int age;
    char address[20];
    float salary;
};
Employee getData(Employee E)
{

    std::cout << "Enter name of employee : ";
    std::cin.get(E.name, 50);
    std::cout << "\nEnter age of employee : ";
    std::cin >> E.age;
    std::cout << "\nEnter address of employee : ";
    std::cin >> E.address;
    std::cout << "\nEnter salary of employee : ";
    std::cin >> E.salary;
    return E;
}
void displayData(Employee E)
{
    std::cout << "\nName of employee : " << E.name;
    std::cout << "\nAge of employee : " << E.age;
    std::cout << "\nAddress of employee : " << E.address;
    std::cout << "\nSalary of employee : " << E.salary;
}
int main()
{
    Employee E, temp;
    temp = getData(E);
    E = temp;
    displayData(E);
    return 0;
}