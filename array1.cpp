// find the greatest no. in array

#include<iostream>
using namespace std;

int search_element(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
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

    int num=search_element(arr,size);
    cout<<"greateest no. is :"<<num;
    return 0;
}