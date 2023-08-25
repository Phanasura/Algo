#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,m,s;
void nhap(){
	fi >> n >> m;
}
void solve(){
	s=(m*(m-1)/2)*(n*(n-1)/2);
	fo << s;
}
int main(){
	nhap();
	solve();
	return 0;
	fi.close();
	fo.close();
}

