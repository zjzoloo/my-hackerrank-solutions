#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(long N) {
    if (N == 1) return false; 
    if (N == 2) return true; 
    if ((N & 0x1) == 0x0) return false; 
    
    long rootN = (long) sqrt(N);
    
    for (long divisor = 3; divisor <= rootN; divisor += 2) {
        if ((N % divisor) == 0) return false;
    }
    
    return true;
}


int main() {
    int n, num;
    cin >> n; 
    for(int i=0; i<n; i++) {
        cin >> num;
        if (isPrime(num) == true){
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}


