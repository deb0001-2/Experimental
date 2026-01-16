#include <stdio.h> //Find GCF of two numbers using loop

int main() {
    int n1 = 12, n2 = 18;
    int gcd_loop = 1;
    // --- Using a Normal Loop (Reverse Iteration) ---
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


