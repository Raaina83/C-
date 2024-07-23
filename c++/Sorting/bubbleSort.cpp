#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size); //TIME COMPLEXITY(WORST CASE)-->O(n^2)
int printArray(int arr[], int size);

int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    printArray(arr, 6);
    cout << endl;
    bubbleSort(arr, 6);
    printArray(arr, 6);
}

int bubbleSort(int arr[], int size)
{
    bool swapped=false;
    for (int i = 0; i < size - 1; i++) //FOR ROUNDS
    {
        for (int j = 0; j < size - i - 1; j++) //FOR COMPARISONS
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
        }
        if(swapped==false){ //OPTIMISED SOLUTION-->BEST CASE TIME COMPLEXITY WILL BE O(n)
            break;
        }
    }
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}