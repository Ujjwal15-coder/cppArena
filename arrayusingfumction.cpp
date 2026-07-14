#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
  int main(){
    int number[5]={2,7};
    int n=5;
    printArray(number,5);
    cout<<endl;

    int num[8]={2,7,9,8};
     n=8;
    printArray(num,8);
  }
