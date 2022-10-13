#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i=1;i<n;i++)
    {
        int temp = nums[i],j=i-1;
        while( j>=0 && temp<nums[j])
        {
            nums[j+1] = nums[j];
            j=j-1;
        }
        nums[j+1] = temp;
    }
}

int main()
{
    vector<int> arr = {2,1,3,4,-1,8,13,7};
    insertion_sort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
