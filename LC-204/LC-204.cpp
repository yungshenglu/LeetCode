#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int countPrimes(int n) {
        vector<int> primes;
        for (int i = 2; i < n; ++i) {
            if (isPrime(i))
                primes.push_back(i);
        }
        return primes.size();
    }

private:
    bool isPrime(int n) {
        if (n == 1)
            return false;
        else {
            for (int i = 2; i <= sqrt(n); ++i) {
                if (n % i == 0)
                    return false;
            }
            return true;
        }
    }
};