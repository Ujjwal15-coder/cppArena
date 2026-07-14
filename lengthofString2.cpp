#include <iostream>
using namespace std;
int getLength(char name[],int n){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() {
  char name[20];
  cout<<"Enter Your Name"<<endl;
  cin>>name;
  cout<<"Length Is: "<<getLength(name,20);
  return 0;
}