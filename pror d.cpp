#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Initialize the answer as the length of the string
        int ans = n;

        // Iterate through the characters
        for (int i = 1; i < n; ++i) {
            // If the current character is the same as the previous one
            if (s[i] == s[i - 1]) {
                // Remove the pair and update the answer
                ans -= 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}