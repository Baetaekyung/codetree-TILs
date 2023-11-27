#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, c, sum = 1;
    cin >> a;
    if(a % 2 != 0){
        sum *= a;
    }
    cin >> b;
    if(b % 2 != 0){
        sum *= b;
    }
    cin >> c;
    if(c % 2 != 0){
        sum *= c;
    }
    if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        sum = a * b * c;
    }
    cout << sum;
}