
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;


int minCostDistribution(int N, const vector<int>& Freq) {
    vector<long long> dp(N + 1, LLONG_MAX);
    dp[0] = 0; // Base case

    for (int i = 1; i <= N; ++i) {
        if (i >= 1) {
            dp[i] = min(dp[i], dp[i - 1] + Freq[i - 1]) % MOD;
        }
        if (i >= 2) {
            dp[i] = min(dp[i], dp[i - 2] + Freq[i - 1]) % MOD;
        }
        if (i >= 3) {
            dp[i] = min(dp[i], dp[i - 3] + Freq[i - 1]) % MOD;
        }
    }

    return dp[N];
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> Freq(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> Freq[i];
    }
    cout <<  minCostDistribution(N , Freq);

}