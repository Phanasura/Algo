/*Cho da giác A g?m có n d?nh A1, A2, …, AN (3<N<=1000), t?a d? các 
d?nh là s? nguyên có giá tr? tuy?t d?i không vu?t quá 30.000. Hãy xác d?nh xem 
da giác là da giác gì trong các lo?i da giác sau: Ða giác l?i (1); Ða giác lõm (2); 
Ða giác t? c?t (3)*/
#include <bits/stdc++.h>
using namespace std;
fstream fi,fo;
const int nm=1002;
struct diem
{
 double x,y;
};
diem a[nm];
bool kt;
int i,j,n;
double tdt(diem a,diem b,diem c)
{ double a1,b1,c1;
 a1 = a.y-b.y;
 b1 = b.x-a.x;
 c1 = a.x*b.y-a.y*b.x;
 return (a1*c.x+b1*c.y+c1);
}
void dtdg()
{ double dt=0;
 for(int i=1;i<=n;i++)
 dt=dt+(a[i].x-a[i+1].x)*(a[i].y+a[i+1].y)/2;
 dt=abs(dt);
 cout<<setprecision(3)<<fixed<<dt;
}
bool ktloi(int i, int j)
{ int k,vt;
 for(k=1;k<=n;k++)
 if(tdt(a[i],a[j],a[k])*tdt(a[i],a[j],a[k+1])<0) return 0;
 return 1;
}
bool ktcat(int i, int j)
{
 if(tdt(a[i],a[i+1],a[j])*tdt(a[i],a[i+1],a[j+1])<0
 && tdt(a[j],a[j+1],a[i])*tdt(a[j],a[j+1],a[i+1])<0) return 1;
 return 0;
}
bool kttc()
{ int i,j;
 for(i=1;i<n-1;i++)
 for(j=i+2;j<=n;j++)
 if(ktcat(i,j)) return 1;
 return 0;
}
int main()
{ //fi.open("DAGIAC.INP",ios::in);
 //fo.open("DAGIAC.OUT",ios::out);
 cin>>n;
 for(i=1;i<=n;i++)
cin>>a[i].x>>a[i].y;
a[n+1]=a[1];
kt=1;
for(i=1;i<=n;i++)
 if(ktloi(i,i+1)==0){kt=0; break;}
 if(kt)
 {
 cout<<1<<endl;
 dtdg();
 }
 else
 {
 if(kttc()) cout<<3;
 else
 {
 cout<<2<<endl;
 dtdg();
 }
 }
 return 0;
}
/*
inp:
4
0 0
0 5
5 5
5 0
out:
1
25.000
*/

