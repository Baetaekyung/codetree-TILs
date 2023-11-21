#include <iostream>
using namespace std;
int main() {
    bool arr[31] = {false};
    for(int i = 1; i <= 28; i++){
        int n;
        cin >> n;
        arr[n] = true;
    }
    for(int i = 1; i <= 30; i++){
        if(arr[i] == 0){
            cout << i << endl;
        }
    }
    return 0;
}