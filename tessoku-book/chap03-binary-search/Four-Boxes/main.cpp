#include <iostream>

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

    for (int i = 1; i <= N; i++)
    {
        int A = M[1][i];
        if(A > K){
            continue;
        }
        for (int j = 1; j <= N; j++)
        {
            int B = M[2][j];
            if(A + B > K){
                continue;
            }
            for(int k = 1; k <= N; k++){
                int C = M[3][k];
                if(A + B + C > K){
                    continue;
                }
                for(int l = 1; l <= N; l++){
                    if(M[4][l] == K - (A + B + C)){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
