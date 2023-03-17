#include<bits/stdc++.h>
using namespace std;


void solve(){
    
}

int main()
{   string str="abc";
unordered_set<char> s;
for(int i=0;i<str.length();i++){
    s.insert(str[i]);
} 
int n=3;
vector<string> result;
string output="";

   
     solve(s,n,0,output,result);
    
    return 0;
}