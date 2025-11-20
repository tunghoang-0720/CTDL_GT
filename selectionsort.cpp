#include <iostream>
using namespace std;

void sls(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sls(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void sls(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[minindex] > a[j])
            {
                minindex = j;
            }
        }
        if (a[minindex] != a[i])
        {
            int tmp = a[i];
            a[i] = a[minindex];
            a[minindex] = tmp;
        }
    }
}
