#include <iostream>
#include <vector>

using namespace std;

int knapsack(vector<int>& w, vector<int>& v, int W, int n, vector<vector<int>>& dp)
{
    for (int j = 0; j <= W; j++)
        dp[0][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (j >= w[i-1])
                dp[i][j] = max(dp[i-1][j], v[i-1] + dp[i-1][j - w[i-1]]);
        }
    }
    return dp[n][W];
}
void TruyVet(vector<vector<int>>& dp, vector<int>& w, vector<int>& v, int n, int W)
{
    int i = n;
    int wHienTai = W;
    vector<int> monlay;

    while (i > 0 && wHienTai > 0)
    {
        if (dp[i][wHienTai] != dp[i-1][wHienTai])
        {
            monlay.push_back(i);
            wHienTai -= w[i];
        }
        i--;
    }
    

    if(monlay.empty()) 
        cout << "Khong lay mon nao" << endl;
    else
    {
        cout << "lay cac mon sau: ";
        for (int j = monlay.size()-1; j>=0; j--)
        {
            cout << monlay[j] <<" ";
        }
    }
    cout << endl;    
}

int main()
{
    int n, W;
    cin >> n >> W;

    vector<int> w(n), v(n);
    for (int i = 0; i < n; i++)
        cin >> w[i] >> v[i];

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    cout << "Max value: " << knapsack(w, v, W, n, dp) << endl;
    TruyVet(dp, w, v, n, W);
    return 0;
}
