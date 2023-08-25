#include <bits/stdc++.h>
using namespace std;

ifstream fi("Bai03.inp");
ofstream fo("Bai03.out");

int m, d[] = {500000, 200000, 100000, 50000, 20000, 10000},cur;
int ans[6] = {0};

void readin(){
	fi >> m;
}

void solve(){
	if (m < 50000) {
        fo << "KHONG THUC HIEN DUOC";
        return;
    }
    for (int i = 0; i < 6 && m > 0; i++) {
        ans[i] = m / d[i];
        if (ans[i] > 1000 ){
            cur = ans[i]-1000;
            ans[i] = 1000;
            ans[i+1] = ans[i+1]+((cur*d[i])/d[i+1]);
        }
        m -= ans[i] * d[i];
        
    }/*
    for (int i = 0; i < 6; i++) {
        cout << d[i] << " ";
    }*//*
    for (int i = 0; i < 6 ; i++) {
        if (ans[i] > 1000 ){
            cur = ans[i]-1000;
            ans[i] = 1000;
            ans[i+1] = ans[i+1]+((cur*d[i])/d[i+1]);
            ans[i+2] = ans[i+2]+((cur*d[i+1])/d[i+2]);
        }
    }*/
    for (int i = 0; i < 6; i++) {
        if (ans[i] > 1000 ){
            fo << "KHONG THUC HIEN DUOC";
            return;
        }
    }
    fo << accumulate(ans, ans + 6, 0) << endl;
    for (int i = 5; i >= 0; i--) {
        fo << ans[i] << " ";
    } 
}

int main(){
	readin();
	solve();
	return 0;
	fi.close();
	fo.close();
}
