#include <cstdio>
#include <sstream>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;
    try{
        int n;
        n = stoi(S);
        cout << n << endl;
    } catch (exception e) {
        cout << "Bad String" << endl;
    }
    return 0;
}
