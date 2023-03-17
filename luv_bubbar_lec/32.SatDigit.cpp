#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int

void solve(int n){
    if(n<=0){
        return;
    }
    ;
   
    solve(n/10);
    int t=n%10;
   
    switch(t){
        case 1:
        cout<<"one"<<" ";
        break;
        case 2:
        cout<<"two"<<" ";
        break;
        case 3:
        cout << "three"
             << " ";
        break;
        case 4:
        cout << "four"
             << " ";
        break;
        case 5:
        cout << "five"
             << " ";
        break;
        case 6:
        cout << "six"
             << " ";
        break;
        case 7:
        cout << "seven"
             << " ";
        break;
        case 8:
        cout << "eight"
             << " ";
        break;
        case 9:
        cout << "nine"
             << " ";
        break;
        default :
        cout<<"zero"<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}