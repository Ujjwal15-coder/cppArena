#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,1,2,3,3,4,4};
    int n = 7;
    int xr = 0;
    for(int i = 0; i < n; i++){
        xr = xr^arr[i];
    }
    cout << xr;
}