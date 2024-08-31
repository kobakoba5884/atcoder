#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, W;

  cin >> N >> W;

  int w[N + 1] = {};
  int v[N + 1] = {};

  for(int i = 1; i <= N; i++) {
    cin >> w[i] >> v[i];
  }

  long long dp[N + 1][W + 1] = {};

  for(int i = 1; i <= N; i++) {
    for(int weight = 1; weight <= W; weight++) {
      int dw = weight - w[i];
      if(dw >= 0) dp[i][weight] = max(dp[i - 1][dw] + v[i], dp[i - 1][weight]);
      else dp[i][weight] = dp[i - 1][weight];
    }
  }

  cout << dp[N][W] << endl;

  return 0;
}
