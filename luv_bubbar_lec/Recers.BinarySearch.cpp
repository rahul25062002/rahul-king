#include<bits/stdc++.h>
using namespace std;


bool solve( int arr[],int start,int end,int target){
    if(start>=end)
         return 0;
    int mid=(start+end)/2;
    if(mid==target)
       return 1;
    if(mid>target)
      return solve(arr,0,mid,target);
    else return solve(arr,mid+1,end,target);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target=0;cin>>target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<< solve(arr,0,n-1,target);
    
    return 0;
}