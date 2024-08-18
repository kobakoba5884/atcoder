#include <iostream>
#include <map>

using namespace std;

int main()
{
    int D, N;

    cin >> D >> N;

    int L[N];
    int R[N];

    map<int, int> s;

    for (int i = 0; i < N; i++)
    {
        cin >> L[i] >> R[i];
        s[L[i]]++;
        s[R[i] + 1]--;
    }

    int temp = 0;
    for (int i = 0; i < D; i++)
    {
        temp = temp + s[i + 1];
        cout << temp  << endl;
    }

    return 0;
}