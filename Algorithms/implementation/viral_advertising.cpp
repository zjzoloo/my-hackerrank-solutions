#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    int m = 2;
    int tot = 2;
    for (int i=1; i<n; i++){
        m += m>>1;
        tot += m;
    }
    return tot;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

