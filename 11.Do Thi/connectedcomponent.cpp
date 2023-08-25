#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,m,x,y;
vector<int> v[1001];
bool visited[1001];
void readin(){
	fi >> n >> m;
	for (int i=1;i<=m;i++){
		fi >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){

	visited[u]=true;
	for (int j=0;j<v[u].size();j++){
		if (!visited[v[u][j]])
			dfs(v[u][j]);
	}
}

void solve(){  
    int cnt = 0 ;
    for (int i=1;i<=n;i++){
    	if (!visited[i]){
    		++cnt;
    		dfs(i);
		}
	}
	if (cnt==1) fo << "Do thi lien thong";
	else {
		fo << "Do thi khong lien thong";
		fo << " Do thi cat o: "<< cnt<<" diem" ;
	}
}
int main(){
	readin();
	solve();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
10 8
1 2
2 3
2 4
3 6
3 7
6 7
5 8
8 9
out:
Do thi khong lien thong
inp:
10 10
1 2
2 3
2 4
3 6
3 7
6 7
7 5
5 8
8 9
8 10
out:
Do thi lien thong
*/
