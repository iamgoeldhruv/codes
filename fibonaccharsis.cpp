#include <iostream>
#include <vector>

int fibo(int n) {
    std::vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    long long int t;
    std::cin >> t;
    while (t--) {
        long long int n, k;
        std::cin >> n >> k;
        long long int a = 0;
        int coa, cob;
        coa = fibo(k - 2);
        cob = fibo(k - 1);
        for (int x = 0; x <= n; x++) {
            for (int y = x; y <= n; y++) {
                if (coa * x + cob * y == n) {
                    a++;
                    break;
                }
            }
        }
        std::cout << a << std::endl;
    }
}
