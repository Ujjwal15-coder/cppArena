#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;    // creates an empty vector ---> {}

    v.push_back(1);   // adds element at end ---> {1}

    v.emplace_back(2);   // adds element at end (faster than push_back) ---> {1, 2}


    // ✅ You declared vector<pair<int,int>> but mistakenly pushed into v (int vector)
    vector<pair<int,int>> vec;

    vec.push_back({1,2});       // valid way to insert pair ---> {(1,2)}
    vec.emplace_back(1,2);      // better, avoids extra braces ---> {(1,2), (1,2)}


    // Creates a vector of size 5 with all elements = 10 ---> {10,10,10,10,10}
    vector<int> ve(5,10);

    // Creates a vector of size 5 with default values (0) ---> {0,0,0,0,0}
    vector<int> v1(5);

    // Creates a vector of size 5 with all elements = 20 ---> {20,20,20,20,20}
    vector<int> v2(5,20);

    // Copies v2 into v3 ---> {20,20,20,20,20}
    vector<int> v3(v2);
}

int main() {
    explainVector();
    return 0;
}
