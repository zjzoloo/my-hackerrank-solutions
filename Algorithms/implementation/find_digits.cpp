#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int p=n;
    int c=0;
    while(p!=0)
        {
        int rem= p%10;
        if(rem ==0);
            
        else if(n%rem==0)
            c++;
        p/=10;
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

