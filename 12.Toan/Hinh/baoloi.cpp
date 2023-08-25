/*: Bao l?i
 Cho N (N<=1000) di?m a1,a2,..., aN trên m?t ph?ng. Các di?m d?u có to? d? 
nguyên và không có 3 di?m b?t k? trong chúng th?ng hàng. Hãy vi?t chuong 
trình xác d?nh m?t da giác không t? c?t có d?nh là m?t s? di?m trong các di?m 
dã cho và ch?a t?t c? các di?m còn l?i. Hãy tính chu vi và di?n tích da giác này.*/
/*
inp:
8
7 1
16 4
2 3
13 7
11 12
5 11
2 8
7 5
out:
6 39.631 105.000*/
#include <bits/stdc++.h>
using namespace std;
fstream fi,fo;
const int nm=1e4+1;
struct diem
{
 double x,y;
};
diem a[nm];
vector<diem>b;
int i,j,n,d;
bool c[nm],kt;
double a1,b1,c1,p;
double kc(double x1,double y1,double x2,double y2)
{
 return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
bool ss(diem a, diem b)
{
 return (a.y<b.y);
}
bool cungphia(diem d1, diem d2)
{ int j=0;
 double kq,a1,b1,c1;
 a1=d1.y-d2.y; b1=d2.x-d1.x; c1=d1.x*d2.y-d2.x*d1.y;
 do
 {
 j++;
 kq=a1*a[j].x+b1*a[j].y+c1;
 } while (kq==0&&j<n);
 if(kq<0)
 {
 for(int k=j+1;k<=n;k++)
 if(a1*a[k].x+b1*a[k].y+c1>0) return 0;
 }
 else
 {
 for(int k=j+1;k<=n;k++)
 if(a1*a[k].x+b1*a[k].y+c1<0) return 0;
 }
 return 1;
}
void dtcvdg()
{ double dt=0,cv=0;
 for(i=0;i<b.size()-1;i++)
 {
 dt=dt+(b[i].x-b[i+1].x)*(b[i].y+b[i+1].y)/2;
 cv=cv+kc(b[i].x,b[i].y,b[i+1].x,b[i+1].y);
 }
 dt=abs(dt);
 cout<<setprecision(3)<<fixed<<cv<<" "<<dt;
}
int main()
{ //fi.open("BAOLOI.INP",ios::in);
 //fo.open("BAOLOI.OUT",ios::out);
 cin>>n;
 for(i=1;i<=n;i++)
 cin>>a[i].x>>a[i].y;
 sort(a+1,a+1+n,ss);
 b.push_back(a[1]);c[1]=1;
 do
 {
 kt=false;
 for(i=2;i<=n;i++)
 if(c[i]==0&&cungphia(b[b.size()-1],a[i]))
 {
 b.push_back(a[i]);
 c[i]=1;
 kt=true;
 }
 }while(kt);
 b.push_back(a[1]);
 cout<<b.size()-1<<" ";
 dtcvdg();
 return 0;
}
