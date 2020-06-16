#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int t, q;
        cin >> t >> q;
        switch(t){
            case 1:
                s.insert(q);
                break;
            case 2:
                s.erase(q);
                break;
            case 3:
                cout << (s.find(q) == s.end() ? "No" : "Yes") << endl;
        }
    }
    return 0;
}

