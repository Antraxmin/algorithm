#include <iostream>
using namespace std;

int main() {
    int N;
    int dp[1000] = {};
    dp[0] = 1;
    dp[1] = 1;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    cout << dp[N] % 10007;
}
