#include <iostream>
using namespace std;

void bbs(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bbs(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
void bbs(int a[], int n)
{
    bool swap = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] >= a[j+1])
            {
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
                swap = true;
            }
        }
        if (not swap)
            break;
    }
}