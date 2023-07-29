// swap alternate
// e.g{1,2,3,4,5,6}=>{2,1,4,3,6,5}

#include<iostream>
using namespace std;
void swap_alternte(int arr[],int size)
{
    int start=0;
    while(start<size-1)
    {
        swap(arr[start],arr[start+1]);
        start=start+2;
    }
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

    swap_alternte(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}