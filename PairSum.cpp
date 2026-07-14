#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<vector<int>> ans;
int s=5;
int pairsum(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    //return ans;

    for(auto i:ans){
        cout<<i[0]<<","<<i[1]<<endl;
    }
}
int main() {
  int a[5]={1,2,3,4,0};

  pairsum(a,5);
  printarray(a,5);
  return 0;
}
