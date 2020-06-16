#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    string str = "";
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            str.append(" ");
        }
        for(int j=0; j<n-i; j++){
            str.append("#");
        }
        cout << str << endl;
        str = "";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

