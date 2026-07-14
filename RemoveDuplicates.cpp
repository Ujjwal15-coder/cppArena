#include <iostream>
using namespace std;
void printArray(int arr[],int n){
for( int k=0; k<n;k++)
 { 
    cout << arr[k] << " ";
 }

}
int Remove(int arr[],int n){
int i = 0;
 for(int j=1;j<n;j++)
 { 
    if(arr[j]!=arr[i])
    {
        arr[i+1]=arr[j];
        i++;
    }
 }
   return arr[i+1];
}
int main() {
    int arr[5]={1,1,2,3,3};
    int n=5;
    cout << "Duplicates Containing Array" << " " << endl;
    printArray(arr,n);

    Remove(arr,n);
    cout << endl;
    cout << "Remove Duplicates Containing Array" << endl;
    printArray(arr,n);


}