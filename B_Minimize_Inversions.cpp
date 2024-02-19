#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            std::cin >> b[i];
        }

        // Create a sorted version of permutation b
        std::vector<int> sorted_b = b;
        std::sort(sorted_b.begin(), sorted_b.end());

        // Perform swaps to minimize inversions
        for (int i = 0; i < n; ++i) {
            auto it = std::lower_bound(sorted_b.begin(), sorted_b.end(), a[i]);
            int index = it - sorted_b.begin();
            std::cout << index + i << " ";
        }
        std::cout << std::endl;

        // Output the sorted version of permutation b
        for (int i = 0; i < n; ++i) {
            std::cout << sorted_b[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
