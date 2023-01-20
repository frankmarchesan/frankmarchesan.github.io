#include <iostream>
using namespace std;

void bubble_sort(int list[], int size)
{
    bool swapped;
    for (int i = 0; i < size-1; i++)
    {
        swapped = false;
        for (int j = 0; j < size-i-1; j++)
        {
            if (list[j] > list[j+1])
            {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main()
{
    int list[] = {9, 7, 2, 6, 1};
    int size = sizeof(list)/sizeof(list[0]);
    bubble_sort(list, size);
    cout << "Sorted array: ";
    for (int i=0; i < size; i++) cout << list[i] << " ";
    return 0;
}
