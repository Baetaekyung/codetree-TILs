#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = n*n - i*i; j > 0; j--){
            cout << " ";
        }
        for(int j = i * i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}