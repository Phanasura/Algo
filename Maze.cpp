#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 100;
ll f[MAXN];

void init() {
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i < MAXN; i++) {
        f[i] = f[i-1] + f[i-2] + f[i-3];
    }
}

int main() {
    init();
    ll M;
    int N;
    cin >> M >> N;
    for (int i = 1; i <= M; i++) {
        ll rem = i;
        for (int j = N; j >= 1; j--) {
            if (rem > f[j]) {
                rem -= f[j];
            } else {
                cout << M-i << endl;
                return 0;
            }
        }
    }
    cout << M << endl;
    return 0;
}

