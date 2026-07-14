/* #include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
  for(; ; ){

  if(i<=n){
   cout<<i<<endl;
  }
  else{

    break;
  }
  i++;
}
  return 0;
} */

#include <iostream>
using namespace std;
int main() {
  for(int i=1;i<=5;i++){
    cout<<"hello"<<endl;
    continue;
    cout<<"bye"<<endl;
  }
  return 0;
}