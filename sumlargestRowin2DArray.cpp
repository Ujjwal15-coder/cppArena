#include <iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int i,int j)
 {
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]==target)
        {

            return 1;
        }
    }
  }
  return 0;
}

//row wise sum
void printSum(int arr[][3],int i,int j)
{
    cout<<"printing sum of rows"<<endl;

    for(int i=0;i<3;i++)
    {
        int sum = 0;
    for(int j=0;j<3;j++)
    {
        sum += arr[i][j];
    }
    cout<<sum<<" ";
}
}

int largestRow(int arr[][3],int i,int j)
{
    int maxi = INT_MIN;
    int rowIndex=-1;

    for(int i=0;i<3;i++)
    {
        int sum=0;
        for (int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
            if(sum>maxi){
                maxi=sum;
                rowIndex=i;
            }
        }
        cout<<"Maximum sum is "<<maxi<<endl;
        return rowIndex;

    }

    int main() 
    { 
        //creating 2d array
        int arr[3][3];
cout<<"Enter the 12 elements with the space"<<endl;
//taking row wise input
 for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
}

cout<<"Printing the array"<<endl;
   for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


//   cout<<"Enter the element to search"<<endl;
//   int target;
//   cin>>target;

//   if(isPresent(arr,target,3,4))
//   {
//     cout<<"elements is found"<<endl;
//   }
//   else
//   {
//     cout<<"Element is not found"<<endl;
//   }

//   printSum(arr,3,4);

  int ans = largestRow(arr,3,3);
  cout<<"Maximum sum is at index "<<ans<<endl;
  return 0;
}