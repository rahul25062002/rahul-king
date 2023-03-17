//gcd is hcf
// Euclidean theorm to find gcd, gcd(a,b)=gcd(a-b,b);
// Relationship between lcm anf hcf is lcm(a,b)*gcd(a,b)=a*b

#include<bits/stdc++.h>
using namespace std;




// int main()
// {    int a,b;
//      cin>>a>>b;
//    int temp;

// if (a==0){
//     cout<<b;
//     return 0;
// }
// if(b==0){
//     cout<<a;
//     return 0;
// }
//    if(a<b){
//      temp=b;
//      b=a; a=temp;
//    }

//    while(a!=0){
//     a=a-b;
//     if(a<b and a>0){
//         temp=a;
//         a=b;b=temp;
//     }
//    }

//    cout <<b<<endl;
   
   
    
//     return 0;
// }


// another recursiv approch


int gcd(int a, int b){

if(a==0){
    return b;
}
if(a>=b)
 return gcd(a-b,b);
else return gcd(b-a,a);

}

int main(){
    int a,b;
    cin>>a>>b;
    if (a == 0)
    {
     cout<<b;
     return 0; }
 if(b==0){
     cout<<a;
     return 0;
 }

cout << gcd(a, b);
return 0;
    }
