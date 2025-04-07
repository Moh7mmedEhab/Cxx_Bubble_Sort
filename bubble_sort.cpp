#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int array[], int size, int type = 1)
{
    for (int next = 1; next < size; next++)
    {
        for (int prev = 0; prev < next; prev++)
        {
            switch (type)
            {
                case 1:
                    if (array[prev] > array[next])
                    {
                        swap(array[prev], array[next]);
                    }
                    break;
                case 2:
                    if (array[prev] < array[next])
                    {
                        swap(array[prev], array[next]);
                    }
                    break;
                default:
                    if (array[prev] > array[next])
                    {
                        swap(array[prev], array[next]);
                    }
            }
        }
    }
}

int main()
{
    int numbers[] = {1, 5, 9, 0, 2, -10, -12, -30, 100, 1000, 87};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    bubble_sort(numbers, size, 1);
    
    cout << "{ ";

    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] << " ";
    }
    
    cout << "}";

    return 0;
}