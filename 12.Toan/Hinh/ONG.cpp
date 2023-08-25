#include<bits/stdc++.h>
using namespace std;

int a[1005];
int dp[1005];

int main(){
    //freopen("ONG.INP", "r", stdin);
    //freopen("ONG.OUT", "w", stdout);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    dp[0] = 0;
    dp[1] = a[1];
    for(int i = 2; i <= n; i++){
        dp[i] = max(dp[i-1], dp[i-2]+a[i]);
    }
    cout << endl;
    for (int i=1;i<=n;i++) cout << dp[i]<< " ";
    cout << endl;
    cout << dp[n];

    return 0;
}

