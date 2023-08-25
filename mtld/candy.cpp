#include <bits/stdc++.h>
#include <fstream>

using namespace std;

ifstream fi("test.txt");
ofstream fo("kq.txt");
long long n,a[1000],s,tongchung;
bool kt;

void nhap(){
	fi>>n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
	
}
void solve(){
	
	s=0;
	for (int i=1;i<=n;i++){
		s=s+a[i];
	}
	kt = false;
	tongchung = s;
	for (int i=1;i<=n;i++){
		if (a[i]> tongchung/2 ) {
			s=s-a[i];
			kt=true;
		}
	}
	if (kt) fo << ((tongchung-s)-s);
	else fo << (s % (s/2));
	
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
5
2 1 3 4 3 5
out:
1 // ti le chenh lech giua tong cac goi keo  
*/
