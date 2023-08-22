// power of two

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


void power_of_two(int arr[],int size)
{   
    vector <int> temp;
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<=30;j++)
        {
            if(pow(2,j)==arr[i])
            {
                temp.push_back(arr[i]);
                count++;
            }
        }
    }


    for(int i=0;i<count;i++)
    {
        cout<<temp[i]<<"  ";
    }

    
}


  
int main()
{
   int arr[100];
   int n;
   cout<<"enter hte array size";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }


  cout<<"the power of two in given array is:  ";
   power_of_two(arr,n);
   
    return 0;
}