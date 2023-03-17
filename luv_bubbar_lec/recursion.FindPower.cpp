#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int

// int solve(int a,int b){
    
//     if(a==1){
//         return b;
//     }
//     return b*solve(a-1,b);
// }


//   second approch

int solve(int a,int b){
    if(a==1){
        return b;
    }
    if(a==0){
        return 1;
    }
    int ans=solve(a-1,b);
    if(a%2==1){
        return b*ans*ans;
    }
    else return ans*ans;
}

int main()
{
  int a,b;
  cin>>a>>b;
  int t=solve(a,b);

     cout<<t;
     
    
    return 0;
}