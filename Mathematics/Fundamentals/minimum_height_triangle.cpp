#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double lowestTriangle(int base, int area){
    return ceil((2 * area)/(float)base);
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}

