// make the power set of element in the given array 


#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> num, int index, vector<int> output, vector<vector<int>> &answer)
{
    if(index>=num.size()){
        answer.push_back(output);
        return;
    }
    //exclude
    solve(num, index+1, output, answer);
    //include 
    output.push_back(num[index]);
    solve(num, index+1, output, answer);
}

int main()
{    vector<int> num={1,2,3};
     vector<vector<int>> answer;
     vector<int> output;
     int index=0;
     solve(num,index,output,answer);
     for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
     }
     
    
    return 0;
}