#include <iostream>
#include <string>

int main()
{
    std::string fruit[] = {"Apple","Peach","Orange","Grape","Pear"};
    std::string sweets[] = {"Chocolate","Cake","Caramel","Waffles"};
    std::string dairy_Products[] = {"Milk","Yogurt","Curd","Butter","Kefir","Sour Cream"};
    int check_tesak = 0;

    std::cout << "Welcome to Our Supermarket! " << std::endl;
    std::cout << "Please choose your favorite food number!" << std::endl << "1. Friut\n2. Sweets\n3. Dairy Products" << std::endl;
    std::cin >> check_tesak;

    switch (check_tesak)
    {
    case 1:
        std::cout << "Choose any one!" << std::endl;
        for (int i = 1; i <= sizeof(fruit) / sizeof(fruit[0]); ++i)
            std::cout << i << ". " << fruit[i - 1] << std::endl;
        break;
    case 2:
        std::cout << "Choose any one!" << std::endl;
        for (int i = 1; i <= sizeof(sweets) / sizeof(sweets[0]); ++i)
            std::cout << i << ". " << sweets[i - 1] << std::endl;
        break;
    case 3:
        std::cout << "Choose any one!" << std::endl;
        for (int i = 1; i <= sizeof(dairy_Products) / sizeof(dairy_Products[0]); ++i)
            std::cout << i << ". " << dairy_Products[i - 1] << std::endl;
        break;
    defoult:
        std::cout << "Choose the right option!";
    }
    return 0;
}

