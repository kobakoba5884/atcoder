#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> A(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    vector<int> copiedA = A;

    sort(copiedA.begin(), copiedA.end());

    copiedA.erase(unique(copiedA.begin(), copiedA.end()), copiedA.end());

    map<int, int> compressMap;

    for (int i = 1; i < copiedA.size(); i++)
    {
        compressMap[copiedA[i]] = i;
    }

    string answer = "";

    for (int i = 1; i <= N; i++)
    {
        answer += to_string(compressMap[A[i]]) + " ";
    }

    answer.pop_back();

    cout << answer << endl;

    return 0;
}
