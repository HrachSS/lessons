#include <iostream>
#include<vector>


    void mysort(int arr[],const int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    /*for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i] << std::endl;
    }*/
}

int main()
{
    const int size = 4;
    int array[size]{ 4,2,9,7 };
    mysort(array, size);
    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i] << std::endl;
    }
}