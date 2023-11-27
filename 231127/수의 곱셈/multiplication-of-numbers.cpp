#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>odd;
    vector<int>even;
    int a, b, c;
    cin >> a >> b >> c;
    if(a * b * c % 2 != 0){
        cout << a * b * c;
    }
    return 0;
}