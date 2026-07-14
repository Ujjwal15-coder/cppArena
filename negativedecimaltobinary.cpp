/* #include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a negative or decimal number: "<< endl;
    cin >> n;
    int i = 0;
    int ans = 0;

    bool isNegative = n < 0;
    if (isNegative) {             //MOST IMPORTANT PART
        n = -n; // Work with positive value
    }

    
    while(n != 0) {
        int bit = n & 1;
        ans = ans + bit * pow(10, i);
        n = n >> 1;
        i++;
    }

    if (isNegative) {
        // For negative numbers, we'll represent them as signed binary
        cout << "Binary representation of the above number : -" << ans << endl;
    } else /*for positive */
       /* cout << "Binary representation of the above number : " << ans << endl;
    }
    
    return 0;
} */
#include <iostream>
using namespace std;
int main(){


        int x=0;
        int digit;
        int num;
        cout<<"Enter the number";
        cin >> num;
        while(num>0)
        {
            digit=num%10;
            x=x*10+digit;
            num=num/10;

        }
        if(num==x){
            cout<<x<<" Pallindrome number found ";
        }
        else {
            cout<<"Not Pallindrome number";
        }
        return 0;
    }