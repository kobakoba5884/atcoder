#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  int P[N + 1], A[N + 1];
  vector<int> n;

  n.push_back(0);

  for(int i = 1; i <= N; i++) {
    cin >> P[i] >> A[i];
    n.push_back(i);
  }

  int dp[N + 1][N + 1] = {};

  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N - i; j++){
      int left = j, right = j + i;
      vector<int> temp;
      temp.assign(n.begin() + left, n.begin() + right + 1);
      vector<int> l_temp = temp;
      l_temp.erase(l_temp.begin());
      auto l_it = find(l_temp.begin(), l_temp.end(), P[left]);
      int l_score = 0;
      if(l_it != l_temp.end()){
        l_score = A[left] + dp[left + 1][right];
      }else{
        l_score = dp[left + 1][right];
      }

      vector<int> r_temp = temp;
      r_temp.pop_back();
      auto r_it = find(r_temp.begin(), r_temp.end(), P[right]);
      int r_score = 0;
      if(r_it != r_temp.end()){
        r_score = A[right] + dp[left][right - 1];
      }else{
        r_score = dp[left][right - 1];
      }

      dp[left][right] = max(l_score, r_score);
    }
  }

  cout << dp[1][N] << endl;

  return 0;
}
