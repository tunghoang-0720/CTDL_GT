#include <iostream>
using namespace std;

int bins(int a[], int start, int end, int k);

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int index = bins(a, 0, n-1, k);
    if (index != -1)
        cout << index;
    else cout << "khong co trong mang";
    return 0;
}

int bins(int a[], int start, int end, int k)
{
    int mid = (start + end) / 2;
    if (start > end)
        return -1;
    if (a[mid] == k )
        return mid;
    if (a[mid] < k)
        return bins(a, mid + 1, end, k);
    else
        return bins(a, start, mid, k);
}