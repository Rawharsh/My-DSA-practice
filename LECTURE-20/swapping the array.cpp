#include<iostream>
using namespace std;
#include<vector>

vector<int> swapping(vector<int> v1)
{
    int s=0,e=v1.size()-1;
    while(s<=e)
    {
        swap(v1[s],v1[e]);
        s++;
        e--;
    }
    return v1;
}


void print(vector<int> v2)
{
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}
 
 int main()
    {
       // int arr[5]={11,7,3,12,4};
       vector<int> v;
      v.push_back(11);
      v.push_back(7);
      v.push_back(3);
      v.push_back(12);
      v.push_back(4);

      vector<int> vswap =swapping(v);

      print(vswap);




      return 0;
    }
 
