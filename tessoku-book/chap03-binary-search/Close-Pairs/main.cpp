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

    long long cnt = 0;
    int j = 2;

    for (int i = 1; i < N; ++i)
    {

        while (j <= N && A[j] - A[i] <= K)
        {
            j++;
        }

        cnt += (j - i - 1);
    }

    cout << cnt << endl;

    return 0;
}
