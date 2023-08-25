#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int a[1001][1001],n;
string s;
void readin(){
	fi >> n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			fi >> a[i][j];
		}
	}
}
bool check=false;
vector <string> res;
void bt(int i,int j,string s){
	if (i==1 && j==1 && !a[i][j]){
		check=false;
		return;
	}
	if (i==n && j==n && a[n][n]){
		check=true;
		res.push_back(s);
		return;
	}
	if (a[i+1][j] && i<n){
		//s=s+"D";
		bt(i+1,j,s+'D');
	}
	if (a[i][j+1] && j<n){
	    //s=s+"R";
		bt(i,j+1,s+'R');
	}
	
	if ((j<n&&i<n&&a[i+1][j]==0 && a[i][j+1]==0 )||a[n][n]==0){
		return;
	}
}
void solve(){
    bt(1,1,"");
    if (check){
    	sort(res.begin(),res.end());
    	for (int i=0;i<res.size();i++) cout << res[i]<<" ";
	}
	else cout << -1;
}
int main(){
	readin();
	solve();
	return 0;
	fi.close();
}
