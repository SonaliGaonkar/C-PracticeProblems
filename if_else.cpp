#include <iostream>

int main(){
    int num;
    std::cout << "Enter the number : ";
    std::cin >> num;
    if(num >= 0){
        std::cout << "The number " << num << " is positive.";
    }
    else{
        std::cout << "The number " << num << " is negative.";
    }
    return 0;
}