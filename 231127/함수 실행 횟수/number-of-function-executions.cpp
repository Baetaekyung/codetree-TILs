#include <iostream>

using namespace std;

static int count = 0;
int codetree(int n){
    count++;
    if(n < 2){
        return n;
    }
    else{
        return codetree(n - 1) + codetree(n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    codetree(n);
    cout << count % 1000000007;
    return 0;
}