// given is a array checkif it is sorted or not usinf recurssion



#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int

bool solve(int  arr[],int n,int k){
    if(k>=n-1)
    return true;
    if(arr[k]>arr[k+1])
   return false; 
   return true && solve(arr,n,k+1);
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    cout<< solve(arr,n,0);
    
    return 0;
}