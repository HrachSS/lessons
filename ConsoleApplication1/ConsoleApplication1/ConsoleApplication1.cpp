#include <iostream>
#include <string>


int main()
{
    int age = 0;
    std::string name = " ";
    std::string surname = " ";

    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " " << "years old" << std::endl;

    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Perfect " << name << std::endl;

    std::cout << "Please enter your surname: ";
    std::cin >> surname;
    std::cout << "Welcome " << surname << " " << name;
}
