// find minimum no. in array


#include<iostream>
using namespace std;

int findminimum_num(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
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

    int num=findminimum_num(arr,size);
    cout<<"Minimum no. is :"<<num;
    return 0;
}