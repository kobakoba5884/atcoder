#include <iostream>

using namespace std;

int main(){
    int H, W;

    cin >> H >> W;

    int matrix[H][W];
    int s[H][W];

    for(int i = 1; i <= H; i++){
        int sum = 0;
        for(int j = 1; j <= W; j++){
            cin >> matrix[i -1][j -1];
            sum += matrix[i -1][j -1];
            s[i - 1][j - 1] = sum;
        }
    }

    int Q;

    cin >> Q;

    for(int i = 1; i <= Q; i++){
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int sum = 0;
        for(int j = A; j <= C; j++){
            int sub = (B == 1) ? 0 : s[j - 1][B - 2];
            sum += s[j - 1][D - 1] - sub;
        }
        cout << sum << endl;
    }

    return 0;
}