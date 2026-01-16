#include <stdio.h>

// Method 1: Using a Function to find GCF
int gcf(int a, int b) {
    int result = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int n1 = 12, n2 = 18;
    int gcd_loop = 1;
    
    // --- Approach 1: Using the Function ---
    printf("Calculated using Function: %d\n", gcf(n1, n2));

    // --- Approach 2: Using a Normal Loop (Reverse Iteration) ---
    // Start from the smaller number and go down.
    // The first common factor we find is GUARANTEED to be the Greatest.
    int min = (n1 < n2) ? n1 : n2;
    for(int i = min; i >= 1; i--) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd_loop = i;
            break; // Found the highest one, no need to check further!
        }
    }

    printf("Calculated using Normal Loop: %d\n", gcd_loop);

    return 0;
}
