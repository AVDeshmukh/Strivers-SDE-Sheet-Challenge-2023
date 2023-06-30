#include <bits/stdc++.h>
int fun(vector<int>arr, int mid)
{
    long long page=0;
    int student=1;
    for(int i=0; i<arr.size(); i++)
    {
        if(page+arr[i]<=mid)
            page+=arr[i];
        else
        {
            student++;
            page=arr[i];
        }
    }
    return student;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n)
        return -1;
    int low=*max_element(arr.begin(), arr.end());
    int high= accumulate(arr.begin(),arr.end(),0);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int stu=fun(arr,mid);
        if(stu > m)
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}