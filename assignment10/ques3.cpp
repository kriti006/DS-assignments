#include <stdio.h>

int main() {
    int nums[] = {2, 3, 2, 4, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int freq[1000] = {0};   // hash map for counting

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    // Print numbers that appear
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            printf("%d :  %d times\n", i, freq[i]);
        }
    }

    return 0;
}
