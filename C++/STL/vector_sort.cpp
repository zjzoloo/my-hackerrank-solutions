#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, var;
    vector<int> lst;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> var;
        lst.push_back(var);
    }
    sort(lst.begin(), lst.end());
    for(int i=0; i<N; i++){
        cout << lst[i] << " ";
    }
    return 0;
}

