#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,s,t;
void nhap(){
	fi >> n;
}
void solve(){
	s=n*n;
	t=n*n;
	for (int i=1;i<=n-1;i++){
		t=t-i*2;
		s=s+t;
	}
	fo << s;
}
int main(){
	nhap();
	solve();
	return 0;
	fo.close();
	fi.close();
}
/*
inp: 5
out: 85
*/
