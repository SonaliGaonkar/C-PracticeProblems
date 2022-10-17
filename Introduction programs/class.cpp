#include <iostream>
class Rectangle
{
public:
    double length;   //data members
    double height;   //data members
    double width;   //data members

    double area()   //member functions
    {
        return length * height;
    }

    double volume()   //member functions
    {
        return length * width * height;
    }
};
int main()
{
    Rectangle R;             //R is object of class rectangle
    R.length = 5;
    R.height = 3;
    R.width = 2;
    std::cout << "Area of rectangle is : " << R.area() << "\n";
    std::cout << "Volume of rectangle is : " << R.volume() << "\n";
    return 0;
}