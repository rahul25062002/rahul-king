#include<bits/stdc++.h>
using namespace std;


void solve(){

int i=1;
i++;
int &j=i;
j++;
cout<<i<<" "<<j;

int *d=new int;
*d=i;
cout<<endl;
cout<<*d<<endl;

int **arr=new int*[*d];
for(int i=0;i<*d;i++){
      arr[i]=new int[*d];
}
for(int i=0;i<*d;i++){
    for(int j=0;j<*d;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<*d;i++){
    for(int j=0;j<*d;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for (int i = 0; i < *d; i++)
{
    delete []arr[i];
}
delete []arr;
delete d;





}

int main()
{
    
   
     solve();

    return 0;
}