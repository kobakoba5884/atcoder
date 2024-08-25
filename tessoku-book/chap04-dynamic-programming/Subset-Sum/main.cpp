#include <iostream>

using namespace std;

int main() {
  int N, S;
  cin >> N >> S;

  int A[N + 1] = {0};
  bool matrix[N + 1][S + 1];

  for(int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  for(int i = 0; i <= N; i++) {
    fill(matrix[i], matrix[i] + S + 1, false);
  }

  matrix[0][0] = true;

  for(int i = 1; i <= N; i++) {
    bool previous[S + 1];
    bool current[S + 1];
    copy(matrix[i - 1], matrix[i - 1] + S + 1, previous);
    copy(matrix[i - 1], matrix[i - 1] + S + 1, current);
    
    for(int j = 0; j <= S; j++) {
      if(!previous[j])
        continue;
      if(j + A[i] <= S)
        current[j + A[i]] = true;
    }
    copy(current, current + S + 1, matrix[i]);

    if(matrix[i][S]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}