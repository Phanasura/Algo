#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,a[1000],r;
void nhap(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
}
void solve(){
	r=0;
	int i=1;
	while (i<n){
		int j=i;
		while ((j<n) and (a[i]==a[j+1])){
			j++;
		}
		int t=j;
		if (j<n) j++;
		while ((j<n) and (a[i]==a[j+1])){
		    j++;		 
		}
		if (j-i+1>r) r=j-i+1;
		i=t+1;
		}
		
	} 
int main(){
	nhap();
	solve();
	fo << r;
	return 0;
	fi.close();
	fo.close();
}
