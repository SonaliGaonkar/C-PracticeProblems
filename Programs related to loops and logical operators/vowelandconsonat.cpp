#include <iostream>

int main()
{
    char alphabet;
    std::cout << "Enter alphabet : ";
    std::cin >> alphabet;
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        std::cout << "Alphabet is vowel.";
    }
    else if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        std::cout << "Alphabet is vowel.";
    }
    else
    {
        std::cout << "Alphabet is consonant.";
    }
    return 0;
}