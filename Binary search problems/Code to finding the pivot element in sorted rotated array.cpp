#include<iostream>
using namespace std;

int pivot_element_index(int arr[],int n)
{
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {

            end=mid;
        }
    }
    return start;
}
int main()
    {
    int index,arr[6]={7,9,1,2,3,4};
     index=pivot_element_index(arr,6);    //CALLING OF THE FUNCTION
     cout<<"THE PIVOT ELEMENT IS ="<<arr[index]<<endl;
     cout<<"THE INDEX OF THE PIVOT ELEMENT IS ="<<index<<endl;


    }
