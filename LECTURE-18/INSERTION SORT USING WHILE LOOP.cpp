#include <iostream>
using namespace std;

int main() {
		int arr[7]={10,1,7,4,8,2,11};
		for(int i=1;i<7;i++)
       // int i=1;
      //while(i>=0)
	{
	   int temp=arr[i];
	    int j=i-1;
	    while(j>=0)
	    {
	        if(arr[j]>temp)
	        {
	            arr[j+1]=arr[j];
	        }
	        else
	        {
	            break;
	        }
	        j--;
	    }
	       // i--;
	        arr[j+1]=temp;
	    
	}
	for(int j=0;j<7;j++)
	{
	    cout<<arr[j]<<" ";
	}
	return 0;
}
