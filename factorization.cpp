#include <bits/stdc++.h>
using namespace std;
function factorial(n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return (n - 1) + (n - 2);
    }
}

int main()
{
    int c = 6;
    cout << factorial(c) << endl;
}