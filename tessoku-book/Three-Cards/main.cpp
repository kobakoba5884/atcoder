#include <iostream>

using namespace std;

int main(){
    int N, K;

    cin >> N >> K;

    int cnt = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N ; j++){
            int red = i;
            int brue = j;
            int white = K - (red + brue);

            if(white > N or white <= 0){
                continue;
            }
            int sum = red + brue + white;

            // cout << red << " " << brue << " " << white << endl; 

            if(sum == K){
                cnt += 1;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}