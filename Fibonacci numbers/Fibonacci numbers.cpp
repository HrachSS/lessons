
#include <iostream>

int fibonacci(int n)
{
    if (n == 1)
    {
        std::cout << n<< std::endl;
        return n+10;
    }
    else if(n == 0)
    {
        std::cout << n<< std::endl;
        return n+10;
    }
    else
    {
        std::cout << n<<"ok"<<std::endl;
        return  fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;


    std::cout << "Fibonacci number " << n << " is: " << fibonacci(n) << std::endl;

    return 0;
}