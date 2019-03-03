using namespace std;

class Solution {
public:
    /**
     * Concepts: Euclid-Euler Theorem
     * Euclid proved that 2^{p−1}(2^p − 1) is an even perfect number whenever 2^p − 1 is prime, where pp is prime
     * for p = 2: 2^1(2^2 − 1) = 6
     * for p = 3: 2^2(2^3 − 1) = 28
     * for p = 5: 2^4(2^5 − 1) = 496
     * for p = 7: 2^6(2^7 − 1) = 8128.
     */
    bool checkPerfectNumber(int num) {
        vector<int> primes = { 2, 3, 5, 7, 13, 17, 19, 31 };
        for (int i = 0; i < primes.size(); ++i) {
            if (euclid_euler(primes[i]) == num)
                return true;
        }
        return false;
    }

private:
    int euclid_euler(int p) {
        return pow(2, p - 1) * (pow(2, p) - 1);
    }
};