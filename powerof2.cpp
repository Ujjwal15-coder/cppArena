#include <iostream>
#include <math.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 if(n<0){
    cout<<"False";

 }                      //Leetcode problem 3
 while(n>0){
    if(n%2==0){
        cout<<"True";
        return 0;

    }
    cout<<"False";
    return 0;
 }
}