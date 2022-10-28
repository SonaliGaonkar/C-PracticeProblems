#include <iostream>

class Employee
{
public:
    int id;
    std::string name;
    int age;
    std::string address;

    Employee()
    {
        std::cout << "Enter employee id : ";
        std::cin >> id;
        std::cout << "Enter employee name : ";
        std::cin >> name;
    }
    void ageDetails()
    {
        std::cout << "Enter employee age : ";
        std::cin >> age;
    }
    void addressDetails()
    {
        std::cout << "Enter employee address : ";
        std::cin >> address;
    }
};
class Display : public Employee
{
    int salary;

public:
    void salarydetails()
    {
        std::cout << "Enter employee salary : ";
        std::cin >> salary;
    }
    void displayDetails()
    {
        std::cout << "\nEmployee ID is : " << id;
        std::cout << "\nName of employee is : " << name;
        std::cout << "\nAge of employee is : " << age;
        std::cout << "\nAddress of employee is : " << address;
        std::cout << "\nSalary of employee is : " << salary;
    }
};
int main()
{
    Display d;
    d.ageDetails();
    d.addressDetails();
    d.salarydetails();
    d.displayDetails();
    return 0;
}