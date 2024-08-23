#include <iostream>
#include <string>

using namespace std;

int main()
{
    int H, W, N;

    cin >> H >> W >> N;

    int A[N + 1] = {0};
    int B[N + 1] = {0};
    int C[N + 1] = {0};
    int D[N + 1] = {0};

    int matrix[H + 1][W + 2] = {0};

    for (int t = 1; t <= N; t++)
    {
        cin >> A[t] >> B[t] >> C[t] >> D[t];
        for (int i = A[t]; i <= C[t]; i++)
        {
            matrix[i][B[t]]++;
            matrix[i][D[t] + 1]--;
        }
    }

    for (int i = 1; i <= H; i++)
    {
        int sum = 0;
        string answer_line = "";
        for (int j = 1; j <= W; j++)
        {
            sum += matrix[i][j];
            answer_line += to_string(sum) + " ";
        }
        answer_line.pop_back();
        cout << answer_line << endl;
    }

    return 0;
}