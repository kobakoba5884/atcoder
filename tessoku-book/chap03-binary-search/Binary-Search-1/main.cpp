#include <iostream>

using namespace std;

int main(){
    int N, X;

    cin >> N >> X;

    int A[100001] = {0};

    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }

    int pl = 1;
    int pr = N;
    int pm = N / 2;
    while(pl <= pr){
        if(A[pm] == X){
            cout << pm << endl;
            break;
        }else if(A[pm] > X){
            pr = pm - 1;
        }else{
            pl = pm + 1;
        }

        pm = (pr + pl) / 2;
    }

    return 0;
}