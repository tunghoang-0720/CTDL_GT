#include <iostream>
using namespace std;

void ctt(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++)
        cin >> a[i];
    ctt(a,n);
    for (int i = 0; i< n; i++)
        cout << a[i] << " ";
    return 0;
}
void ctt(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    int count[max + 1] = {};
    for (int i = 0; i < n; i++)
        count[a[i]]++;
    int index = 0;
    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0 )
        {
            a[index++] = i;
            count[i]--;
        }    
    }
}