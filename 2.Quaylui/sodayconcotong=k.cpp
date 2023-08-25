#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int n,k,a[1001],x[1001],s=0;
vector<vector<int> > res;
void readin(){
	//res.clear();
	//v.clear();
	fi >> n >> k;
	for (int i=1;i<=n;i++) fi >> a[i];
	sort(a+1,a+n+1);
}
void bt(int i){
	for (int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			s=0;
			for (int t=1;t<=n;t++) {
		        if (x[t]){
		            s+=a[t];
				}
			}
			if (s==k){
				vector<int> v;
				for (int t=1;t<=n;t++){
					if (x[t]) 
					v.push_back(a[t]);
				}
				res.push_back(v);
			}
			
		}
		else bt(i+1);
	}
}
void solve(){
	bt(1);
	sort(res.begin(),res.end());
	for (int i=0;i<res.size();i++){
		cout <<  "[";
		for (int j=0;j<res[i].size()-1;j++){
			cout << res[i][j] << " ";
		}
		cout << res[i][res[i].size()-1]<<"] ";
	}
}
int main(){
	readin();
	solve();
	return 0;
	fi.close();
}
