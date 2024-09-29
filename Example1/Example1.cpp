#include <iostream>
#include <string>





int main()
{
    
        int array[8] = { 19,8,16,3,6,9,12,2 };
        int max = array[0];
        int min = array[0];
        for (int i = 0; i < 8; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            if (array[i] < min)
            {
                min = array[i];
            }
        }
        std::cout << "max = " << max << std::endl;
        std::cout << "min = " << min;
    
    return 0;
}

