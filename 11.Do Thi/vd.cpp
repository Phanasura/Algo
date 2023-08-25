#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,m,x,y,s,t;
bool visited[1001];
vector<int> v[1001];
int parent[1001];
void readin(){
	fi >> n >> m>> s >> t;
	for (int i=1;i<=m;i++){
		fi >> x >> y ;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited, false, sizeof(visited) );
	memset(parent , 0 , sizeof(parent));
}
/*
void dfs(int u){
	
    visited[u]= true;
   // fo << u<< " ";
    for (int j=0;j<v[u].size();j++)
    {
    	if (!visited[v[u][j]]){
    		parent[v[u][j]] = u;
			dfs(v[u][j]);
		}
	}
}*/
void bfs(int u){ // voi bfs co the tim duong di ngan nhat
   queue<int> q;
   q.push(u);
   visited[u]=true;
   while (!q.empty()){
       int top = q.front();
	   q.pop();
	   for (int i=0;i<v[top].size();i++){
	       if (!visited[v[top][i]]){
	           visited[v[top][i]]=true;
	           q.push(v[top][i]);
	           parent[v[top][i]] = top;
		   }
	   }	
   }
}
void findway(int s, int t){
	if (!visited[t]) fo << "Khong co duong di!";
	else {
		fo << "Co duong di la:";
		vector<int> path;
		while (t!=s){
			path.push_back(t);
			t=parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for (int i=0;i<path.size();i++){
			fo << path[i]<< " ";
		}
	}
}
void solve(){
    bfs(s);
    findway(s,t);
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
7 6
1 7
1 2
2 3
2 4
3 6
3 7
6 7
out: 
Co duong di la:1 2 3 7 
*/
