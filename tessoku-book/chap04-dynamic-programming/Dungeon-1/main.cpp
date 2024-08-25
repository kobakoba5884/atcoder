#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N + 1] = {0};
    int B[N + 1] = {0};

    for (int i = 2; i <= N; i++)
        cin >> A[i];

    for (int i = 3; i <= N; i++)
        cin >> B[i];

    int dp[N + 1] = {0};
    dp[2] = A[2];

    for (int i = 2; i <= N; i++)
        dp[i + 1] = min(dp[i] + A[i + 1], dp[i - 1] + B[i + 1]);

    cout << dp[N] << endl;

    return 0;
}
