#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void subseq(int index,vector<int> &empt,vector<int> &arr, int n,vector<vector<int>> &a)
{
    if(index==n)
    {
        a.push_back(empt);
        return;
    }
    empt.push_back(arr[index]);
    subseq(index+1,empt,arr,n,a);
    empt.pop_back();
    subseq(index+1,empt,arr,n,a);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> empt;
    vector<vector<int>> a;
    for(int i = 0; i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    subseq(0,empt,arr,n,a);
    for(int i = 0 ; i < a.size(); i++)
    {
        for(int j = 0; j < a[i].size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
