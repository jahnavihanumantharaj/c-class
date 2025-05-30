#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex =j;
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {29, 10, 14, 37, 13};
    int n =sizeof(arr) / sizeof(arr[0]);

    cout << "original array: ";
    printarray(arr, n);

    selectionsort(arr, n);

    cout << "sorted array: ";
    printarray(arr, n);

    return 0;
}