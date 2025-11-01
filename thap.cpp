#include <iostream>
using namespace std;
int buoc;

void thap(int n, char nguon, char dich, char phu)
{
    if (n ==1)
    {
        buoc++;
        cout << "Buoc: " << buoc << "Chuyen dia tu " << nguon << " sang " << dich << endl;
    }
    else 
    {
        thap(n-1, nguon, phu, dich);
        
        buoc++ ;
        
        cout << "Buoc: " << buoc << "Chuyen dia " << n << " tu " << nguon << " sang " << dich << endl;
        
        thap(n-1, phu, dich, nguon);
    }
}

int main()
{
    int n;
    cin >> n;
    thap(n, 'A', 'C', 'B');
    cout << "tong so buoc can thiet la: " << buoc << endl;
    return 0;
}
