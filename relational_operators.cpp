#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    bool result;

    result = (a == b);   
    std::cout << "3 == 5 is " << result << "\n";

    result = (a != b);  
    std::cout << "3 != 5 is " << result << "\n";

    result = a > b;   
    std::cout << "3 > 5 is " << result << "\n";

    result = a < b;   
    std::cout << "3 < 5 is " << result << "\n";

    result = a >= b;  
    std::cout << "3 >= 5 is " << result << "\n";

    result = a <= b;  
    std::cout << "3 <= 5 is " << result << "\n";

    return 0;
}