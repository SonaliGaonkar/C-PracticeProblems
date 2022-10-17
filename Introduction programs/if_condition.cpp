#include <iostream>

int main(){
    int num;
    std::cout << "Enter the number  : ";
    std::cin >> num;
    if(num > 0){
        std::cout << "Entered number is : " << num;
    }
    return 0;
}