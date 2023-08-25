//hop nhat danh sach
/*
inp:
1
2 2
out:
6
*/
#include <bits/stdc++.h>
#define int long long 

using namespace std;

const int MOD = 1e9 + 7;

void pre_compute(vector < vector < int > > &ncr, int max_size)
{
    ncr = vector < vector < int > >(max_size + 1, vector < int >(max_size + 1));

    for (int i = 0; i <= max_size; ++i)
    {
        ncr[i][0] = ncr[i][i] = 1;

        for (int j = 1; j < i; ++j)
            ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % MOD;
    }
}

main()
{
    vector < vector < int > > ncr;
    pre_compute(ncr, 200);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        cout << c[n + m][m] << endl;
    }

    return 0;
}

