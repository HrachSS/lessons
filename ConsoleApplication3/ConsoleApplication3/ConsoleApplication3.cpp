#include <iostream>

int main()
{
    int My_Factorial = 1;
    int num = 0;
    

    std::cout << "Write down the factorial of the number you want to count: ";
    std::cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        My_Factorial = My_Factorial * i;
        
    }
        std::cout << My_Factorial ;
    
    return 0;
}
