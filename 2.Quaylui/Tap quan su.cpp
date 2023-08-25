#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int n,k,d[1001],a[1001],t;
void readin(){
	fi >> n >> k;
	memset(d,0,sizeof(d));
	 for (int i=1;i<=k;i++) {
	 	fi >> a[i];
	 	d[a[i]]=1;
	 }
}
void solve(){
	int i=k;
	while (i>0 && a[i] == n-k+i) i--;
	if (i<=0) cout << k << endl;
	else {
		a[i]+=1;
		for (int j=i+1;j<=k;j++){
			a[j] =a[j-1]+1;
		}
		for (int i=1;i<=k;i++) d[a[i]] = 0;
		int kq=0;
    	for (int i=1;i<=40;i++){
		    if (d[i]) kq+=1;
	    }
    	cout << kq << endl;
	}
	
}
int main(){
	fi >> t;
	while (t--){
		readin();
		solve();
	}
	return 0;
	fi.close();
}
/*
3
5 3
1 3 5
5 3
1 4 5
6 4
3 4 5 6
*/
