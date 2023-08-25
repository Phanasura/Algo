#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int vt1,vt2,a=0;
string t;
void nhap(){
	fi >> t;
	for (int i=0;i<t.length();i++){
		if (t[i] == '?'){
			if (vt1==0) vt1=i;
			else vt2=i;
		}
	}
}
int doi(int n,string s){
	for (int i=0;i<s.length();i++){
		int x=s[i]-48;
		n=n*10+x;
	}
	return n;
}
bool ktnt(int x){
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0) return false;
	}
	return true;
}
void solve(){
	for (char x='9';x<='1';x--){
		t[vt1]=x;
		for (char y='9';y<='1';y--){
			t[vt2]=y;
			a= doi(a,t);
			if (ktnt(a)){
				fo << a;
				break;
			}
		}
	}
}
int main(){
    nhap();
    solve();
	return 0;
	fi.close();
	fo.close();
}

