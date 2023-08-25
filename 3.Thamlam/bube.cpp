#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("");

int n, k;
vector<int> a(n);
long long ans = 0;
priority_queue<int> pq;

void readin(){
	cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve(){
    for (int i = n - 1; i >= 0; i--) {
        if (pq.empty() || a[i] + k > pq.top()) {
            ans += a[i];
        } else {
            pq.pop();
        }
        pq.push(a[i]);
    }
    cout << ans << endl;
}

int main(){
	readin();
	sort(a.begin(), a.end());
	solve();
	return 0;
	fi.close();
	fo.close();
}
