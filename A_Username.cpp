#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int index = s.length() - 1;
        while (!isalpha(s[index]))
        { 
            index--;
        }
        cout << s.substr(0, index + 1) << endl;
    }

    return 0;
}