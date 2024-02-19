#include <bits/stdc++.h>
#include <iostream>  
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
       
        if (b % a != 0)
            cout << a / __gcd(a, b) * b << endl;
        else
            cout << b * (b / a) << endl;
    }
}