#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[100001] = {0};
    int left_max[100001] = {0};
    int right_max[100001] = {0};

    int l_max = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        l_max = (A[i] > l_max) ? A[i] : l_max;
        left_max[i] = l_max;
    }

    int r_max = 0;
    for (int i = N; i >= 1; i--)
    {
        r_max = (A[i] > r_max) ? A[i] : r_max;
        right_max[i] = r_max;
    }

    int D;

    cin >> D;

    int L[100001], R[100001] = {0};

    for (int i = 1; i <= D; i++)
    {
        cin >> L[i] >> R[i];
        cout << ((left_max[L[i] - 1] >= right_max[R[i] + 1]) ? left_max[L[i] - 1] : right_max[R[i] + 1]) << endl;
    }

    return 0;
}