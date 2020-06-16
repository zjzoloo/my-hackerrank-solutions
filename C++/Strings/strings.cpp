#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    int sza, szb;
    sza = a.size();
    szb = b.size();
    cout << sza << " " << szb << endl;
    string c = a + b;
    cout << c << endl;
    char x = a[0];
    char y = b[0];
    a[0] = y;
    b[0] = x;
    cout << a << " " << b << endl;
    return 0;
}

