#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    
    vector<int> numbers(testCases);
    int maxNum = 2;
    for (int i = 0; i < testCases; i++) {
        cin >> numbers[i];
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }

    vector<int> sieve(maxNum + 1, 1);
    sieve[0] = 0;
    sieve[1] = 0;
    vector<int> primes;
    
    for (int i = 2; i <= maxNum; i++) {
        if (sieve[i] == 1) {
            primes.push_back(i);
            for (long long j = (long long)i * i; j <= maxNum; j += i) {
                sieve[j] = 0;
            }
        }
    }

    for (int i = 0; i < testCases; i++) {
        int n = numbers[i];
        int count = 0;
        for (int j = 0; j < primes.size() && primes[j] <= n; j++) {
            count += n / primes[j];
        }
        cout << count << "\n";
    }

    return 0;
}