#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,s=0,a[10000];
bool kt;
void nhap(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
		s+=a[i];
	}
}
void solve(){
	int tongchung = s;
	kt = false;
	int res=tongchung/2;
	for (int i=1;i<=n;i++){
		if (a[i]>res){
			s=s-a[i];
			kt =true;
		}
	}
	if (kt) fo << ((tongchung-s)-s);
	else fo << (s%(s/2));
}
int main(){
	nhap();
	solve();
	return 0;
	fo.close();
	fi.close();
}
/*
inp:
2
15 7
out:
8
*/

