#include <bits/stdc++.h>
#include <iomanip>
#define eps 0.000001
using namespace std;

double kc (double xA,double yA,double xB,double yB) {
    return sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
}

void kt (double xA,double yA,double xB,double yB,double xM, double yM) {
    double d1 = kc(xA,yA,xB,yB);
    double d2 = kc(xA,yA,xM,yM);
    double d3 = kc(xB,yB,xM,yM);
    if ((d1+d2-d3 <= eps) || (d1+d3-d2 <= eps) || (d2+d3-d1 <= eps)) {
		cout << "YES" << endl;
		if (d1 > d2 && d1 > d3)  cout << "YES";
		else cout << "NO";	
	}
    else  cout << "NO";
}
int main()   {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    double xA, yA, xB, yB, xM, yM;
    freopen("DL.INP", "r", stdin);
    freopen("KQ.OUT", "w", stdout);
    cin >> xA >> yA >> xB >> yB >> xM >> yM;
	kt(xA, yA, xB, yB, xM, yM);
    return 0;
}
