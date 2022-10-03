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
     int n;
     cout<<"ENTER THE SIZE OF THE ARRAY"<<ENDL;
     cin>>n;
     int arr[n];
     index=pivot_element_index(arr,n);
     cout<<"THE INDEX OF THE PIVOT ELEMENT IS ="<<index<<endl;


    }
