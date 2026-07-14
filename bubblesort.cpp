//Time Complexity ==> O(n) but if swapped is not used then complexity will be O(n^2)
//Space complexity will be O(1) as no extra space is used.

#include <iostream>
using namespace std;

void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
}
void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
}

    
int main() {
   int a[9]={4,6,2,13,9,8,10,11,1};
   int n=9;
    //int n=sizeof(a)/sizeof(a[0]);

    cout<<"Original array"<<endl;
    printArray(a,n);

    bubbleSort(a,n);

    cout<<"Sorted Array after applying bubble sort"<<endl;

    printArray(a,n);
  

}