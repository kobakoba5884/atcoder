#include <iostream>
#include <algorithm>
#include <vector>

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

    int prev[N + 1] = {0};
    prev[2] = 1;

    for (int i = 3; i <= N; i++)
    {
        if (dp[i - 1] + A[i] < dp[i - 2] + B[i])
        {
            dp[i] = dp[i - 1] + A[i];
            prev[i] = i - 1;
        }
        else
        {
            dp[i] = dp[i - 2] + B[i];
            prev[i] = i - 2;
        }
    }

    vector<int> path;
    for (int i = N; i != 0; i = prev[i]) {
        path.push_back(i);
    }

    reverse(path.begin(), path.end());

    cout << path.size() << endl;

    string answer = "";
    for (int i = 0; i < path.size(); i++)
        answer += to_string(path[i]) + " ";
    
    answer.pop_back();

    cout << answer << endl;

    return 0;
}
