#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]); //if you don't want to perform swappig technique
    }                           // temp = arr[i]
                                // arr[i] = arr[i+1]
                                //arr[i+1] = temp
}
int main() {
  int even[8]={1,3,5,7,5,3,5,9};
  cout<<"After Swapping Array is-->"<<endl;
  swapalternate(even,8);
  printArray(even,8);
  return 0;
}