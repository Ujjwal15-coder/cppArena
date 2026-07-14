#include <iostream>
#include <map>
using namespace std;
int main() {

    map<int,string> m;
    m[1]="Scorpio";
    m[2]="XUV500";
    m[13]="Verna";

    m.insert({7,"Bheem"}); 

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13--> "<<m.count(13)<<endl; //O(log n)

    auto it = m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
        
    }
  
  
}