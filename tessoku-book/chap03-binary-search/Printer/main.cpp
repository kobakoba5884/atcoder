#include <iostream>
#include <cmath>

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

    int max_second = pow(10, 9);
    int min_second = 1;
    int second;

    while (min_second < max_second)
    {
        second = (max_second + min_second) / 2;

        long long flyer_num = 0;
        for (int i = 1; i <= N; i++)
        {
            flyer_num += second / A[i];
        }

        if (flyer_num >= K)
        {
            max_second = second;
        }
        else
        {
            min_second = second + 1;
        }
    }

    cout << min_second << endl;

    return 0;
}
