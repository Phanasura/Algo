/*Di?n tích da giác t? c?t
Trên m?t ph?ng lu?i to? d? Ðê các, xu?t phát t? di?m (0, 0) ngu?i ta v
m?t du?ng g?p khúc có các c?nh song song v?i 
tr?c to? d? theo quy t?c sau: bút v? du?c di?u 
khi?n b?ng chuong trình là m?t xâu các ký t? U, 
R. G?p l?nh U bút v? s? chuy?n lên trên m?t don 
v?, còn khi g?p l?nh R bút v? s? chuy?n sang ph?i 
m?t don v?. Khi h?t chuong trình bút v? du?c kéo 
th?ng v? g?c to? d?. Hình bên tuong ?ng v?i 
chuong trình v? là RRRURRUUURRRRRUUR.*/
/*
inp:
RRRURRUUURRRRRUUR
out:
8.515
*/
#include <bits/stdc++.h>
using namespace std;
const int nm=1e5+1;
struct diem
{
 double x,y;
};
vector<diem> a,b,c;
int n,i,d;
double ss,s1,s2,a1,b1,c1,a2,b2,c2,xx,yy,dd,dx,dy,x,y;
fstream fi,fo;
string s;
double tdt(diem a,diem b,diem c)
{ double a1,b1,c1;
 a1 = a.y-b.y;
 b1 = b.x-a.x;
 c1 = a.x*b.y-a.y*b.x;
 return (a1*c.x+b1*c.y+c1);
}
bool ktcat(int i, int j)
{
 if(tdt(a[0],a[n],a[i])*tdt(a[0],a[n],a[j])<0
 &&tdt(a[i],a[j],a[0])*tdt(a[i],a[j],a[n])<0) return 1;
 return 0;
}
double dientich(vector<diem> a)
{ double dt=0;
 for(int i=0;i<a.size()-1;i++)
 dt=dt+(a[i].x-a[i+1].x)*(a[i].y+a[i+1].y)/2;
 return abs(dt);
}
int main ()
{
 //fi.open("AREA.INP",ios::in);
 //fo.open("AREA.OUT",ios::out);
cin>>s;
s=s+'A';
a.push_back({0,0});
d=1;
xx=0; yy=0;
for(i=0;i<s.length()-1;i++)
 if(s[i]==s[i+1]) d++;
 else
 {
 if(s[i]=='U') yy=yy+d;
 else
if(s[i]=='R') xx=xx+d;
 a.push_back({xx,yy});
 d=1;
 }
 n=a.size()-1;
 a1=a[n].y-a[0].y; b1=a[0].x-a[n].x; c1=a[n].x*a[0].y-a[0].x*a[n].y;
 b.push_back(a[0]);
 c.push_back(a[0]);
 for(i=1;i<n;i++)
 {
 if(tdt(a[0],a[n],a[i])>=0) b.push_back(a[i]);
 if(tdt(a[0],a[n],a[i])<=0) c.push_back(a[i]);
 if(ktcat(i,i+1))
 {
 a2=a[i+1].y-a[i].y; b2=a[i].x-a[i+1].x; c2=a[i+1].x*a[i].y-a[i].x*a[i+1].y;
 dd=a1*b2-a2*b1; dx=-c1*b2+c2*b1; dy=-a1*c2+a2*c1;
 x=dx/dd; y=dy/dd;
 b.push_back({x,y});
 c.push_back({x,y});
 }
 }
 b.push_back(a[n]);
 b.push_back({a[0].x,a[n].y});
 b.push_back(a[0]);
 c.push_back(a[n]);
 c.push_back({a[n].x,a[0].y});
 c.push_back(a[0]);
 ss=xx*yy;
 s1=dientich(b);
 s2=dientich(c);
 cout<<setprecision(3)<<fixed<<ss-s1-s2;
}

