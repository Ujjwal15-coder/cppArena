// stl --> Algorithms, Containers, Functions,Iterators

#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int>p1={1,3};
    cout << p1.first << " " << p1.second << endl;
    
    pair<int, pair<int, int>> p2 ={1,{6,9}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[]={{1,2},{3,4},{5,6}};
    
    cout << arr[1].second; //fetch elements from the second index pair and we get 4
}
int main() {
   explainPairs();
  return 0;
}