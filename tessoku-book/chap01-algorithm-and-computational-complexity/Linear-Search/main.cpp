#include <iostream>

using namespace std;

int main(){
    int N, X;

    cin >> N >> X;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] == X){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}