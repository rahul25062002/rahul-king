#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define ul unsigned long long int

void solve(string &s, int i, int j)
{
    if (i < 0)
        return;
    if (j >= s.length())
    {

        return;
    }
    swap(s[i], s[j]);
    solve(s, i - 1, j + 1);
    //   if(i==s.length()/2)
    //   cout<<s;
    return;
}

int main()
{
    string t;
    cin >> t;
    int start;
    int last ;
    if ((t.length()%2!=0))
    {
         start = t.length() / 2;
         last = t.length() / 2;
    }
    else {
        start = (t.length() / 2 )-1;
        last = (t.length() / 2) ;
    }

    solve(t, start, last);
    cout << t;
    return 0;
}