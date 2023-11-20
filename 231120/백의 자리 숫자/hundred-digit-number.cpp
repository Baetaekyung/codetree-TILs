#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int ans[10] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        int a = 0;
        a = arr[j] / 100;
        ans[a]++;
    }
    for(int k = 0; k < 10; k++){
        if(ans[k] != 0){
            cout << k << " - " << ans[k] << '\n';
        }
    }

    return 0;
}