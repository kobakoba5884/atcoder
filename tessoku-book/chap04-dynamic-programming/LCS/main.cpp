#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string S, T;

  cin >> S >> T;

  int sl = S.length(), tl = T.length();

  int dp[sl + 1][tl + 1] = {};

  for(int i = 1; i <= sl; i++){
    for(int j = 1; j <= tl; j++){
        if(S[i - 1] == T[j - 1]){
            dp[i][j] = dp[i - 1][j - 1] + 1;
        }else{
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
  }

  cout << dp[sl][tl] << endl;

  return 0;
}
