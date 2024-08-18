#include <iostream>

using namespace std;

int main(){
    int N;

    cin >> N;

    int temp;

    string s = "";

    while(s.length() < 10){
        int mod = N % 2;
        N /= 2;

        s.insert(0, to_string(mod));
    }

    cout << s << endl;

    return 0;
}