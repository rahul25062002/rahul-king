#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
    int pivert=arr[start];
    int count=0;
    for(int i=start;i<=end;i++){
          if(arr[i]<pivert){
            count++;
          }
    }
    int newpt=start+count;
    swap(arr[start],arr[newpt]);
    int i=start,j=end;
    while(i<=newpt and j>newpt){
        while(arr[i]<=arr[newpt]) i++;
        while(arr[j]>arr[newpt]) j--;
        if (i <= newpt and j > newpt) swap(arr[i++],arr[j++]);
    }
    return newpt;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
    return ;
}


void solve(int arr[],int n){
    if(n<=1){
        return;
    }
    quickSort(arr,0,n-1);
    
    
}

int main()
{ int n=10;
       int arr[10]={0,6,3,4,2,1,6,8,10,23};
   
     solve(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     } cout<<endl;
    
    return 0;
}