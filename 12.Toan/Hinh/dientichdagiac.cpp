#include <bits/stdc++.h>
using namespace std;
ifstream fi("Area.inp");
ofstream fo("Area.out");
struct Point {
    double x, y;
};

double areaPolygon(Point polygon[], int n) {
    double area = 0.0;
    int j = n - 1;

    for (int i = 0; i < n; i++) {
        area += (polygon[j].x + polygon[i].x) * (polygon[j].y - polygon[i].y);
        j = i;
    }

    return abs(area / 2.0);
}

int main() {
    
    Point polygon[1001];
    int n;
    fi >> n;
    for (int i=0;i<n;i++){
    	fi >> polygon[i].x >> polygon[i].y;
	}
 
    double area = areaPolygon(polygon, n);

    fo << fixed << setprecision(1);
    fo << area;

    return 0;
}

