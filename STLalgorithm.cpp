#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 5--> "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Lower Bound--> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"Upper Bound--> "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"Max--> "<<max(a,b)<<endl;
    cout<<"Min--> "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a --> "<<a<<endl;

    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<"After reversing a string-->"<<str<<endl;

    //rotating
    cout<<"Before rotate"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    } cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end()); //1 is rotated
    cout<<"After rotate"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }



  
}