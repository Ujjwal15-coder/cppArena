#include <iostream>
using namespace std;
int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the base and power: "<<endl;
    cin>>a>>b;
    cout<< "The value of "<<a<<" raised to the power of "<<b<<" is "<<pow(a,b)<< endl;
}