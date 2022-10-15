                                      //CLEAR THE DOUBT 


#include <iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr[])
{
  int i=0,j=0,k;
  while(i<n && j<m)
  {
    if(arr1[i]<arr2[j])
    {
        arr[k]=arr1[i];
        k++;
        i++;
    }
    else{
        arr[k++]=arr2[j++];
        
    }
  }
  while(i<n)
  {
    arr[k++]=arr1[i++];
  }
   while(j<n)
  {
    arr[k++]=arr2[j++];
  }
  for(int q=0;q<8;q++) // this is when you use void function and did not return anything
    {
        cout<<arr[q]<<" ";
    }
  // return arr[];
}
  


int main() {
	int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr[8]={0};
 //   int ans[8];
 //  ans=
   merge(arr1, 5,arr2,3,arr);

  /*  for(int i=0;i<8;i++)
    {
        cout<<ans[i]<<" ";
    }*/
    
	return 0;
}
