// Last modified on 20/05/2018 by Youssef Hassan

#include <iostream>

using namespace std;

template <class T>
void ShellSort(T data[], int n)
{
    for(int gap = n/2; gap > 0; gap /= 2)
        for(int i = gap, j; i < n; i++)
        {
            T temp = data[i];
            for(j = i; j >= gap && temp < data[j-gap]; j -= gap)
                data[j] = data[j-gap];
            data[j] = temp;
        }
}

int main()
{
    int arr[] = {5, 2, 7, 1, 9, 11, 3, 0};
    ShellSort(arr, sizeof(arr)/4);
    for(int i = 0; i < sizeof(arr)/4; i++)
        cout << arr[i] << endl;
    return 0;
}
