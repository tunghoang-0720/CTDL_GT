#include <iostream>
using namespace std;

void iss(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    iss(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void iss(int a[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int valueindex = a[i];
        int j = i - 1;
        while (j >=0 && a[j] > valueindex)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = valueindex;
    }
}
