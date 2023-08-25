#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n;
char x,a[1000];
void nhap(){
	int i=0;
	while (! fi.eof()){
		fi >> x;
	if ((x<='9')&&(x>='0')){
		i++;
		a[i]=x;
	}
	}
	n=i-1;
}
bool kt(){
	int j=n;
	while (a[j]=='0') j--;
	int  i=j-1;
	while (a[i]>=a[j]) i--;
	if (i==0) return false;
	a[i]++;
	a[j]--;
	i++;
	j=n;
	while (i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
	
}
void xuat(){
	fo << "1"<< endl;
	for (int i=1;i<=n;i++){
		fo << a[i];
    }
}
void solve(){
	if (kt()) xuat();
	else  fo << 0;
}
int main(){
	nhap();
	solve();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
23990
out:
1
24089
*/
