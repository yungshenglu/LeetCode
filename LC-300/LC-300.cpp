#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 65536

using namespace std;

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF && N != 0) {
        int list[MAX] = { 0 };
        for (int i = 0; i < N; ++i)
            scanf("%d", &list[i]);

        // Use DP to find LIS
        int LIS[MAX] = { 1 }, length = 1;
        for (int i = 0; i < N; ++i) {
            int longest = 0;
            for (int j = 0; j < i; ++j) {
                if (list[j] < list[i])
                    longest = max(longest, LIS[j]);
            }
            
            LIS[i] = longest + 1;
            length = max(length, LIS[i]);
        }

        // Print the result
        printf("%d\n", length);
    }
    
    return 0;
}