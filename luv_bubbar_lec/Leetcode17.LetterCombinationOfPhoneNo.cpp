/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.*/


#include<bits/stdc++.h>
using namespace std;

void mapping(string str,vector<string> &list){
    int len=str.length();
    if(len==0){ 
        list.push_back("");
        return;
    }
    int i=0;
    while(len){
        char c=str[i];
        switch (c)
        {
        case '2':
            list.push_back("abc");
            
            break;
        case '3':
            list.push_back("def");
            break;
        case '4':
            list.push_back("ghi");
            break;
        case '5':
            list.push_back("jkl");
            break;
        case '6':
            list.push_back("mno");
            break;
        case '7':
            list.push_back("pqrs");
            break;
        case '8':
            list.push_back("tuv");
            break;
        case '9':
            list.push_back ("wxyz");
            break;
        }
        i++;len--;
    }

     return;   
    
}
void solve(vector<string> &result, vector<string> list,int i,string output)
{  if(i>=list.size()) {
    result.push_back(output);
    return;
}
int t=list[i].length();
int j=0;
while(t--){
    output+=list[i][j];
    solve(result, list, i+1, output);
    output.pop_back();j++;
}
return;

}

int main()
{     string str="2345";
      vector<string> list;
      mapping(str,list);
     vector<string> result;
     string output="";
     solve(result,list,0,output);
     for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
     }
    
    return 0;
}