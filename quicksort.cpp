#include <iostream>
using namespace std;

int partition(int a[], int low, int high);
void quicksort(int a[], int low, int high);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, 0, n-1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low -1;
    for (int j = low; j < high; j++ )
    {
        if (a[j] < pivot)
        {
            i++;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    int tmp = a[i+1];
    a[i+1] = a[high];
    a[high] = tmp;
    return i + 1;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int index = partition(a,low,high);
        quicksort(a, low, index - 1);
        quicksort(a, index + 1, high);
    }
}