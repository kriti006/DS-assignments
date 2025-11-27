#include <stdio.h>

int main() {
    int nums[] = {4, 5, 1, 2, 0, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int freq[1000] = {0};   // frequency map

    // Count frequency of every number
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    // Find first element with frequency 1
    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }
    }

    printf("No non-repeating element");
    return 0;
}
