class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       int m=nums2.size();
       vector<int>temp;
       int index=0;
       int i=0;
       while(index<n && i<m)
       {
        if(nums1[index]<nums2[i])
        {
            temp.push_back(nums1[index]);
            index++;
        }
        else{
            temp.push_back(nums2[i]);
            i++;
        }
       }
       while(index<n)
       {
        temp.push_back(nums1[index]);
        index++;
       }
       while(i<m)
       {
        temp.push_back(nums2[i]);
        i++;
       }
      int size=temp.size();
      if(size%2==0)
      {
        return (temp[size/2]+temp[size/2-1])/2.0;
      }
      else 
      {
          return temp[size/2];
      }
    

    }
};