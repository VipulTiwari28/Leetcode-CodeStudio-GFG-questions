class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> sortedArray(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),sortedArray.begin());
        sort(sortedArray.begin(),sortedArray.end());
        double median;
        if(sortedArray.size()%2==0)
        {
            int i1=((sortedArray.size()/2)-1);
            int i2=i1+1;
            median = (sortedArray[i1]+sortedArray[i2])/2;
        }
        else
        {
            int i = (((sortedArray.size()+1)/2)-1);
            median = (sortedArray[i]);
        }
        return median;
    }
};