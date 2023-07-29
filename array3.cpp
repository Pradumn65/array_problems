// find the sum of all element of given array



#include<iostream>
using namespace std;

int search_element(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
  
int main()
{
    int arr[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }

    int sum=search_element(arr,size);
    cout<<"sum of all element  is :"<<sum;
    return 0;
}