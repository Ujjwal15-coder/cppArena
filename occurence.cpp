#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
             
        }
        else if(key>arr[mid]){ //right me jaoo
            s=mid+1;

        }
        else //(key<arr[mid])  //left me jao
        {
            e=mid-1;
        }
        mid=s + (e-s)/2;  
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
             
        }
        else if(key>arr[mid]){ //right me jaoo
            s=mid+1;

        }
        else //(key<arr[mid])  //left me jao
        {
            e=mid-1;
        }
        mid=s + (e-s)/2;  
    }
    return ans;
}
int main() {
  int even[7]={2,4,4,4,4,5,9,};
  cout<<"First occuerence of 4 is at index "<< firstOcc(even,7,4) <<endl;
  cout<<"Last occuerence of 4 is at index "<< lastOcc(even,7,4) <<endl;;

  return 0;
}