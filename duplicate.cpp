#include <iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int duplicate(int arr[],int size){
    int ans=0;
    for( int i=0;i<size;i++)
    {
    ans=ans^arr[i];
    }
    for(int i=1;i<size;i++)
    {
    ans=ans^i;
    }
return ans;
}
int main() {
    int even[5]={1,2,3,4,3};

    int dup=duplicate(even,5);
    cout<<"Duplicate number is: "<<dup<<endl;
    cout<<"Array is: ";
    printArray(even,5);


}