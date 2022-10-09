#include<iostream>
#include<vector>
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0,l = (arr.size()-1),mid = (l+s)/2;
        while(s<=l)
        {
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){return mid;}
            else if(arr[mid]<arr[mid-1]){l = mid;}
            else{s = mid;}
            mid = (l+s)/2;
        }
        return mid;
    }
};