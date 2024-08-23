#include <iostream>

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    int A[100001] = {0};

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            if (A[j] - A[i] <= K)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}