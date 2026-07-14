#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;

    vector<int> a(5,1); //vector with size 5 and all elements are 1
    cout<<"Print Vector a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    //vector<int> last(a);

    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<endl; //hence,Capacity becomes double on every input number
    cout<<"Size--> "<<v.size()<<endl; //size means how many elements are present

    cout<<"Element at index 2--> "<<v.at(2)<<endl;
    cout<<"First Element--> "<<v.front()<<endl;
    cout<<"Last Element--> "<<v.back()<<endl;

    cout<<"Before pop size is"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back(); //Last elemnt will be deleted

     cout<<"After pop size is"<<endl;
     for(int i:v)
     {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before Clearing "<<v.size()<<endl;
    v.clear();
    cout<<"Afer Clearing "<<v.size()<<endl;


  
  
}