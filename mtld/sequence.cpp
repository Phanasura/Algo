#include <bits/stdc++.h>
#include <fstream>

using namespace std;

ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
string c;
long long t,tam,m,n,a[1000],b[1000];
int ucln(long long x, long long y){
	int du; 
    do {
    	du=x%y;
    	x=y;
    	y=du;
	}while (du!=0);
	return x;
}
string solve(){
	fi >> n>>m;
	for (int i=1;i<=n;i++){
		    fi >> a[i];
	}
	for (int j=1;j<=m;j++){
		    fi >> b[j];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			tam=ucln(a[i],b[j]);
			a[i]=a[i] / tam;
			b[j]=b[j] / tam;
		}
	}
	c="YES";
	for (int i=1;i<=n;i++){
		if (a[i]!=1) {
			c="NO";
			break;
		}    
	}
	for (int j=1;j<=m;j++){
		    if (b[j]!=1) {
			c="NO";
			break;
		}
	}
	return c;
	
}
int main(){
	fi >> t;
	for (int i=1;i<=t;i++){
	    solve();
	    fo << c<<endl;
	}
	fi.close();
	fo.close();
	return 0;
}
/*
inp:
2 //so bo test
2 3 //so luong phan tu trong 2 mang
10 3  //mang 1
2 3 5 //mang 2 
3 3   //giong o tren
2 4 7
8 1 5
out:
YES   // VI TICH CAC PHAN TU TRONG 2 MANG DEU NHAU
NO // VI TICH CAC  PHAN TU TRONG 2 MANG DEU KHAC NHAU
*/

