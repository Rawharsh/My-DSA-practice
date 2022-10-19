                            //LEETCODE QUESTION OF MERGING TWO SORTED ARRAY


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     /*   if(m=1 && n=0)
        {
            return;
        }
        if(m=0 && n=1)
        {
            return;
        } */
         vector<int> v(m+n);
        int i=0,j=0,k=0;
        
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {  
                v[k++]=nums1[i];
                i++;
            }
            else
            {
                v[k++]=nums2[j++];
            }
        }
        while(i<m)
        {
            v[k++]=nums1[i++];
            
        }
        while(j<n)
        {
            v[k++]=nums2[j++];
        }
        for(int i=0,k=0;i<m+n ,k<m+n;i++,k++)
        {
            nums1[i]=v[k];
        }
        
    }
};
