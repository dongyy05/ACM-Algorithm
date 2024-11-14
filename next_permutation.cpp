// This is next_permutation illustratation

/**
 *It is insides the <algorithm> repository

template <class BidirIt>
bool next_permutation( BidirIt first, BidirIt last );

template <class BidirIt, class Compare>
bool next_permutation( BidirIt first, BidirIt last, Compare comp );
**/

// For instance
#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    do {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } while (next_permutation(arr.begin(), arr.end()));

    return 0;
}
