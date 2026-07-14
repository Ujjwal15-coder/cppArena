#include <iostream>
using namespace std;
void printcounting(int n){  //void does not have return type
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int num;
    cin>>num;
    printcounting(num); //Function calling
    return 0;
}