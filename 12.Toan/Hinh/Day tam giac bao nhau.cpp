/*Dãy tam giác bao nhau
Cho N tam giác du?c cho b?i to? d? các d?nh Ai(x,y), Bi(x,y), Ci(x,y), 
(i=1..N). Tam giác i du?c g?i là bao tam giác j n?u 3 d?nh c?a tam giác j d?u 
thu?c mi?n trong c?a tam giác i. Hãy tìm dãy các tam giác bao nhau có s? 
lu?ng l?n nh?t?*/
/*inp:
5
1 1 14 1 1 7
2 3 7 3 2 9
5 1 3 4 8 2
-4 2 2 5 8 3
7 6 9 8 9 2
out:
2*/
#include <bits/stdc++.h>
using namespace std;
fstream fi,fo;
const int nm=1e4+1;
struct tamgiac
{
 double x1,y1,x2,y2,x3,y3,s;
};
tamgiac a[nm];
int i,j,n,b[nm],c[nm],maxb=0;
double a1,b1,c1,p;
double kc(double x1,double y1,double x2,double y2)
{
 return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
bool ss(tamgiac x, tamgiac y)
{
 return (x.s<y.s);
}
double tdt(double x1,double y1,double x2,double y2,double x3,double y3)
{
 return ((y2-y1)*x3+(x1-x2)*y3-x1*y2+x2*y1);
}
bool ktdtg(tamgiac a,double x, double y)
{
 if((tdt(a.x1,a.y1,a.x2,a.y2,x,y)>=0 &&
 tdt(a.x2,a.y2,a.x3,a.y3,x,y)>=0 &&
 tdt(a.x3,a.y3,a.x1,a.y1,x,y)>=0)||
 (tdt(a.x1,a.y1,a.x2,a.y2,x,y)<=0 &&
 tdt(a.x2,a.y2,a.x3,a.y3,x,y)<=0 &&
 tdt(a.x3,a.y3,a.x1,a.y1,x,y)<=0)) return true;
 return false;
}
bool kttgtg(tamgiac a, tamgiac b)
{
 if(ktdtg(a,b.x1,b.y1)&&ktdtg(a,b.x2,b.y2)&&ktdtg(a,b.x3,b.y3)) return true;
 return false;
}
int main()
{ //fi.open("DTAMGIAC.INP",ios::in);
 //fo.open("DTAMGIAC.OUT",ios::out);
 cin>>n;
 for(i=1;i<=n;i++)
 {
 cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2>>a[i].x3>>a[i].y3;
 a1=kc(a[i].x1,a[i].y1,a[i].x2,a[i].y2);
 b1=kc(a[i].x2,a[i].y2,a[i].x3,a[i].y3);
 c1=kc(a[i].x1,a[i].y1,a[i].x3,a[i].y3);
 p=(a1+b1+c1)/2;
 a[i].s=sqrt(p*(p-a1)*(p-b1)*(p-c1));
 }
 sort(a+1,a+1+n,ss);
 b[1]=1;c[1]=0;
 for(i=2;i<=n;i++)
 {
 for(j=i-1;j>=1;j--)
 if(kttgtg(a[i],a[j])&&b[i]<b[j])
 {
 b[i]=b[j];
 c[i]=j;
 }
 b[i]++;
 maxb=max(maxb,b[i]);
 }
 cout<<maxb;
 return 0;
}
