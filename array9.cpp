// find the unique element in given array 
// condition every no. should twice accept one and thats unique element
// eg. {2,34,3,2,3,34,5}
#include<iostream>
using namespace std;

int unique_element(int arr[],int size)
{   int result=0;
    for(int i=0;i<size;i++)
    {
       result=result^arr[i];
    }
    return result;
}
  
int main()
{
    int arr[1000];
    int n;
    cout<<"enter hte odd size of array  ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result=unique_element(arr,n);
    cout<<"unique number is:  "<<result;
    return 0;
}