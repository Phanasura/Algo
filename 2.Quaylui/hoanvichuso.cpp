#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int t,n,a[1000];
bool cx[1000];
void xuat(){
	for (int i=1;i<=n;i++) fo<< a[i];
	fo << " ";
}
void bt(int i){
	for (int j=1;j<=n;j++){
		if (!cx[j]){
			a[i]=j;
			cx[j]=true;
			if (i==n) xuat();
			else bt(i+1);
			cx[j]=false;
		}
	}
}
int main(){
	fi >> t;
	while (t--){
		fi >> n;
		bt(1);
		fo << endl;
	}
	return 0;
	fi.close();
	fo.close();
}
