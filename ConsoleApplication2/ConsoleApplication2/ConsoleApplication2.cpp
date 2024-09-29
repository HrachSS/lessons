#include <iostream>

int main()
{
    int age = 0;
    int birthyear = 0;
    
    std::cout << "Write your birth year for Login: ";
    std::cin >> birthyear;
    age = 2024 - birthyear;
        if (age >= 18)
            {
             std::cout << "Welcome";
            }
            else
            {
             std::cout << "Try again!";
            }
    return 0;
}
