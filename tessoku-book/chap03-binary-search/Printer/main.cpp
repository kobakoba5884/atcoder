#include <iostream>

using namespace std;

int main(){
    int N, K;

    cin >> N >> K;

    int A[100001] = {0};

    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }

    int flyer_num = 0;
    int second = 0;
    while(flyer_num < K){
        second++;
        for(int i = 1; i <= N; i++){
            if(second % (A[i]) == 0){
                flyer_num++;
            }
        }
    }

    cout << second << endl;

    return 0;
}