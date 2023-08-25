#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,m,a[1000],b[1000];

void nhap(){
	char x;
	fi >> n;
	for (int i=0;i<n;i++){
		fi >> x;
		a[i]=x-48;
    }
	fi >> m;
	for (int i=0;i<m;i++){
		fi >> x;
		b[i]=x-48;
	}
}
void xuat(){
	
	for (int i=0;i<n;i++){
		
		fo << a[i];
		
	}
	
}
void tang(){
	
	for (int i=0;i<n;i++){
		a[i]=a[i]+1;
		if (a[i]>9) a[i]=a[i]%10;
	}
}
void dao(){
	int t=a[n-1];
	for (int i=n-1;i>=1;i--){
		a[i] = a[i-1];
	}
	a[0]=t;
}
void solve(){
	
	for (int i=0;i<m;i++){
		if (b[i]==1) tang();
		else dao();
	}
	xuat();
}
int main(){
	
	nhap();
	
	solve();
	
	return 0;
	fi.close();
	fo.close();
}
