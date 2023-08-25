#include <bits/stdc++.h>

using namespace std;

void enter(int &n, int &W, vector < pair < int, int > > items)
{
    cin >> n >> W;

    items.resize(n + 1);

    // Su? du?ng ki�?u pair d�? nh�?p du~ li�?u ca�c mo�n d�`.
    // items[i].first va` items[i].second l�`n luo?t la` tro?ng luo?ng va` gia� tri? cu?a d�` v�?t thu� i.
    for (int i = 1; i <= n; ++i)
        cin >> items[i].first >> items[i].second;
}

// Truy v�t ca�c mo�n d�` duo?c cho?n.
void trace_back(int n, int W, vector < vector < int > > &dp, vector < pair < int, int > > &items)
{
    vector < int > picked_items;
    while (n > 0)
    {
        if (dp[n][W] == dp[n - 1][W])
            --n;
        else 
        {
            picked_items.push_back(n);
            W -= items[n].second;
            --n;
        }
    }

    for (int i = picked_items.size() - 1; i >= 0; --i)
        cout << picked_items[i] << ' ';
}

// Quy hoa?ch d�?ng.
void solution(int n, int W, vector < pair < int, int > > &items)
{
    vector < vector < int > > dp(n + 1, vector < int >(W + 1, 0));

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= W; ++j)
        {
            dp[i][j] = dp[i - 1][j];

            if (j >= items[i].first)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - items[i].first] + items[i].second);
        }

    // In k�t qua?.
    cout << dp[n][W] << endl;
    trace_back(n, W, dp, items);
}

main()
{
    int n, W;
    vector < pair < int, int > > items;

    enter(n, W, items);
    solution(n, W, items);
}
/*
3 50
10 60
20 100
30 120
out 
220
2 3
*/
