#include<iostream>
using namespace std;
int main(){
    int num = 5;

    cout << "value of num: " << num << endl;
    cout << "address of num: " << &num << endl;

    int *ptr = &num;
    cout << "value at ptr: " << *ptr << endl;
    cout << "address of ptr: " << ptr << endl;

    cout << "size of int " << sizeof(num) << endl;
    cout << "size of ptr "<< sizeof(ptr) << endl;

    double a = 10.54;
    cout  << "address of a: " << &a << endl;
double *d = &a;
d = d + 1;
cout  << d << endl;

  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;



}