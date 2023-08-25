#include <bits/stdc++.h>
#include <fstream>

using namespace std;

ifstream fi("test.txt");
ofstream fo("kq.txt");
int a,b,kq;

void nhap(){
	fi >> a>>b;
}
int ucln(int a,int b){
	int du=1;
	while (du!=0){
		du=a%b;
		a=b; b=du;
	}
	return a;
}
int bcnn(int a,int b){
	int t=ucln(a,b);
    return (a/t)*b;
}
void solve(){
	if (a==b) kq=a;
	else {
		if ((a%b)==0) kq=a-b;
		else if ((b%a)==0) kq=b-a;
		else kq=bcnn(a,b)-a-b;
	}
	fo << kq;
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
6 10
out:
14
*/
