//find fast exponcial  pow(x,n)%m; in O(logn) time complexity;  l24--37:10

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int



int main()
{

    int x,n,m;
    int res=1;
   cin>>x>>n>>m;
   while(n>0){
    if(n&1){
  res=(res*(x%m))%m;
    }
    x=(x%m * x%m)%m;
    n>>1;
   }
   cout<<res<<" "<<endl;
  
    
    return 0;
}