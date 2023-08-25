#include <bits/stdc++.h>
using namespace std;
ifstream fi("Area.inp");
ofstream fo("Area.out");
struct Point {
    double x, y;
};

double dientichtamgiac(Point a, Point b, Point c) {
    double ab = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    double ac = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
    double bc = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
    double p = (ab + ac + bc) / 2;
    return sqrt(p * (p - ab) * (p - ac) * (p - bc));
}

double polygonArea(Point points[], int n) {
    double area = 0.0;
    for (int i = 1; i < n - 1; i++) {
        area += dientichtamgiac(points[0], points[i], points[i+1]);
    }
    return area;
}
int main() {
    
    Point polygon[1001];
    int n;
    fi >> n;
    for (int i=0;i<n;i++){
    	fi >> polygon[i].x >> polygon[i].y;
	}
 
    double area = polygonArea(polygon, n);

    fo << fixed << setprecision(1)<< area;

    return 0;
}

