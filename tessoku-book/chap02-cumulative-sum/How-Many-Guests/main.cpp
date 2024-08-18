#include <iostream>
#include <map>

using namespace std;

int main()
{
    // input
    int N, Q;

    cin >> N >> Q;

    int A[N];

    map<int, int> s;
    s[0] = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        s[i + 1] = s[i] + A[i];
    }

    int L[Q];
    int R[Q];

    for (int i = 0; i < Q; i++)
    {
        cin >> L[i] >> R[i];
        cout << s[R[i]] - s[L[i] - 1] << endl;
    }

    return 0;
}