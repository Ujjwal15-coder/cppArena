#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int unique(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i]; // XOR approach
    }
    return ans;
}

int main() {
    int e[7] = {2, 4, 2, 4, 3, 3, 1};

    int uniq = unique(e, 7);  // Must Store the result
    cout << "Unique number: " << uniq << endl;

    //printArray(e, 7); // Optional: to print the array
}
