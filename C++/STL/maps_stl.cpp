#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string k;
        int v, t;
        cin >> t >> k;
        switch(t){
            case 1:
                cin >> v;
                m[k] += v;
                break;
            case 2:
                m.erase(k);
                break;
            case 3:
                cout << m[k] << endl;
                break;
        }
    } 
    return 0;
}




