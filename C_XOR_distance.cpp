#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long a, b, r;
        std::cin >> a >> b >> r;

        // Find the highest bit that is different in a and b
        long long diff = a ^ b;
        int highest_bit = 63; // Assuming 64-bit integers

        while ((diff & (1LL << highest_bit)) == 0 && highest_bit >= 0) {
            highest_bit--;
        }

        // Calculate the smallest possible value
        long long result = std::min(r, (1LL << (highest_bit + 1)) - 1);

        std::cout << result << std::endl;
    }

    return 0;
}
