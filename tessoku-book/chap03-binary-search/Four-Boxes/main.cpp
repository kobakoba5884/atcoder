#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    int M[5][1001] = {0};

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> M[i][j];
        }
    }

    set<int> sumAB;
    set<int> sumCD;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            sumAB.insert(M[1][i] + M[2][j]);
            sumCD.insert(M[3][i] + M[4][j]);
        }
    }

    for (auto sum : sumAB)
    {
        if (sumCD.contains(K - sum))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
