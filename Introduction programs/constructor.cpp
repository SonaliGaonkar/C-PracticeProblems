#include <iostream>

class Rectangle
{
    double length;
    double width;
    double height;

public:
    Rectangle()
    {
        std::cout << "\nEnter length : ";
        std::cin >> length;
        std::cout << "\nEnter width : ";
        std::cin >> width;
        std::cout << "\nEnter height : ";
        std::cin >> height;
    }
    double area()
    {
        return length * width;
    }
    double volume()
    {
        return length * width * height;
    }
};
int main()
{
    Rectangle r;
    std::cout << "\nArea is : " << r.area();
    std::cout << "\nVolume is : " << r.volume();
    return 0;
}