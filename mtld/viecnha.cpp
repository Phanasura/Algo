#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");

int t,c,a[10000],maxx;

void nhap(){
	fi >> t;
	fi >> c;
	for (int i=1;i<=c;i++) fi >> a[i];
}

void solve(){
	int time,i;
	sort(a+1,a+c+1);
	time=0;
	maxx=0;
	i=1;
	while ((time<t)&&(i<=c)){
		time =time+a[i];
		maxx++;
		i++;
	}
	if (time >t) maxx=maxx-1;
	fo << maxx;
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
6
3
3
6
3
out:
2*/
