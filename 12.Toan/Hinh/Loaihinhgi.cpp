/*Cho t? giác l?i ABCD có to? d? l?n lu?t là: (x1,y1), (x2,y2), (x3,y3), (x4,y4). 
Hãy xét xem t? giác ABCD là hình gì? Trong các hình sau: Hình bình hành (1); 
Hình thoi (2); Hình ch? nh?t (3); Hình vuông (4); Hình t? giác thu?ng (5) ?*/
#include <bits/stdc++.h>
using namespace std;
fstream fi,fo;
struct diem
{
 int x,y;
};
diem a,b,c,d;
bool ss(diem a,diem b, diem c, diem d)
{
 if (b.x-a.x==c.x-d.x&&b.y-a.y==c.y-d.y) return true;
 else return false;
}
int kc(diem a, diem b)
{
 return ((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{ //fi.open("Tugiacloi.inp",ios::in);
 //fo.open("Tugiacloi.out",ios::out);
cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
if(ss(a,b,c,d)&&ss(b,c,d,a))//dk HBH
 {
 if (kc(a,b)==kc(b,c)&&kc(b,c)==kc(c,d)&&kc(a,c)==kc(b,d)) cout<<4;
 else if (kc(a,c)==kc(b,d)) cout<<3;
 else if (kc(a,b)==kc(b,c)&&kc(b,c)==kc(c,d)) cout<<2;
 else cout<<1;
 }
 else cout<<5;
 return 0;
}
/*
inp:
0 0
0 5
5 5
5 0
out:
4
*/
