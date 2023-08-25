#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Polygon {
    int id;
    vector<pair<int, int> > vertices;
};

bool comparePolygons(const Polygon& p1, const Polygon& p2) {
    int n1 = p1.vertices.size(), n2 = p2.vertices.size();
    for (int i = 0; i < n1 && i < n2; i++) {
        if (p1.vertices[i].first != p2.vertices[i].first) {
            return p1.vertices[i].first < p2.vertices[i].first;
        }
    }
    return n1 > n2;
}

int main() {
    int n;
    cin >> n;

    vector<Polygon> polygons(n);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        polygons[i].id = i + 1;
        for (int j = 0; j < m; j++) {
            int x, y;
            cin >> x >> y;
            polygons[i].vertices.push_back(x, y);
        }
    }

    sort(polygons.begin(), polygons.end(), comparePolygons);

    for (int i=0;i<polygons.size();i++) {
        cout << polygons.id[i] << " ";
    }
    cout << endl;

    return 0;
}
