#include <iostream>
#include <string>

using namespace std;

string generateString(int n, int k)
{
    string result;
    int currentChar = 0;

    for (int i = 0; i < n*k; ++i)
    {
        result += 'a' + currentChar;
        currentChar = (currentChar + 1) % k;
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string result = generateString(n, k);
        cout << result << endl;
    }

    return 0;
}