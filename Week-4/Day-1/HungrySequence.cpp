#include<bits/stdc++.h>
using namespace std;

    vector<int> generatePrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return primes;
}

int main() {
    int l = 10000000;
    vector<int> primeList = generatePrimes(l);

    int n; cin>>n;
    for(int i=0;i<n;i++) cout<<primeList[i]<<" ";

    return 0;
}
