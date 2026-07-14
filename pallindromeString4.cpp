#include <iostream>
using namespace std;

bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
        return 1;
}
int main() {
  char name[20];
  cout<<"Enter Your Name"<<endl;
  cin>>name;
  cout<<"Pallindrome or Not "<<checkpalindrome(name,4);
  return 0;
}