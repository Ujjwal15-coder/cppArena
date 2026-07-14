#include <iostream>
#include<array> //must import array library
using namespace std;
int main() {
    int arr[4]={1,3,4,6}; //Normal Method

    array<int,4> a = {1,2,3,4};  //STL method size 4
    int size = a.size();

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"first Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;

}

