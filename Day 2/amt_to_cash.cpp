//1330= 13*100 + 1*20 + 10*1
// only 100,50,20,1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;

    int a = d / 100;
    d %= 100;

    int b = d / 50;
    d %= 50;

    int c = d / 20;
    d %= 20;

    int e = d;   // remaining 1s

    cout << a << " " << b << " " << c << " " << e << endl;

    return 0;
}