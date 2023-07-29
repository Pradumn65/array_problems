// find the element in given array (linear search)


#include<iostream>
using namespace std;

int search_element(int arr[],int size,int element){
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
   return -1;  
}
  
int main()
{
    int arr[100];
    int size;
    cin>>size;
    int element;

    for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }

    cout<<"search element: ";
    cin>>element;

    int index=search_element(arr,size,element);
    if(index==-1)
    {
       cout<<"the given element is not present";
    }
    else{
        cout<<"the given  is present and their index is: "<<index;
    }
    return 0;
}

