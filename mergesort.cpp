#include <iostream>
using namespace std;

void mergesort(int a[], int start, int end);
void merge(int a[], int start, int mid, int end);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergesort(a, 0, n-1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

void mergesort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end)/2;
        mergesort(a, start, mid);
        mergesort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

void merge(int a[], int start, int mid, int end)
{
    int i,j,k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];
    for (i = 0; i < n1; i++)
        left[i] = a[start + i];
    for (j = 0; j < n2; j++)
        right[j] = a[mid + 1+ j];
    i = 0; j = 0; k = start;

    while ( i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else 
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while ( i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while ( j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}