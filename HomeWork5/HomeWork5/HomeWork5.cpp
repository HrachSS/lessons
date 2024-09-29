#include <iostream>

int main()
{
    const int size = 21;
    int numbers[size] = {1,2,37,21,31,56,11,15,17,13,7,5,8,65,22,14,16,19,23,27,29};

    for (int i = 0; i < size; ++i)
    {

        for (int j = 2; j < numbers[i] / 2; ++j)
            if (numbers[i] % j == 0)
            
                std::cout << numbers[i] << std::endl;

            
    }

    return 0;
}


