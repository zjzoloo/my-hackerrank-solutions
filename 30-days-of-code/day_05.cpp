/* 
Author: 	zjzoloo
Date: 	30.04.2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    
    return 0;
}
