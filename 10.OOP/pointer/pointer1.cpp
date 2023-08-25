 #include <bits/stdc++.h>
 using namespace std;
 struct people{
 	people(string ht,int t,int v){
 		hoten=ht;
 		tuoi=t;
 		v1=v;
	}
	string hoten;
 	int tuoi;
 	int v1;
 };
 void nangnguc(people nguoi){
 	nguoi.v1+=11;
 }
 int main(){
 	people nguoiyeucu[4] = {
	    people("lananh",15,68),
 	    people("linh",15,65),
 	    people("ngoc",15,70),
 	    people("nguyen",15,74),
	};
	people *ghe ;
	for (ghe=nguoiyeucu;ghe<nguoiyeucu+4;ghe++){
		cout << (*ghe).v1<<endl;
	}
 	return 0;
 }
