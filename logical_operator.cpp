#include <iostream>

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);       
    std::cout << "(3 != 5) && (3 < 5) is " << result << "\n";

    result = (3 == 5) && (3 < 5);    
    std::cout << "(3 == 5) && (3 < 5) is " << result << "\n";

    result = (3 == 5) && (3 > 5);    
    std::cout << "(3 == 5) && (3 > 5) is " << result << "\n";

    result = (3 != 5) || (3 < 5);    
    std::cout << "(3 != 5) || (3 < 5) is " << result << "\n";

    result = (3 != 5) || (3 > 5);   
    std::cout << "(3 != 5) || (3 > 5) is " << result << "\n";

    result = (3 == 5) || (3 > 5);    
    std::cout << "(3 == 5) || (3 > 5) is " << result << "\n";

    return 0;
}