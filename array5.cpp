// binary search in sorted array

#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int element)
{
   int start=0;
   int end=size-1;
   int mid=(start+end)/2;
   while(start<=end)
   {
    if(arr[mid]==element)
    {
        return mid;
    }
    else if(element>arr[mid])
    {
        start=mid+1;
    }
    else{
      end=mid-15;
    }

    mid=(start+end)/2;
   }

   return -1;
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
    int element;
    cout<<"search the element: ";
    cin>>element;
    
    cout<<"the index of given element is: "<<linear_search(arr,size,element);

    return 0;
}