
#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:

    string reverseWords(string S) 
    { 
      
        string str;
        int r;
        int m  = S.size();
        
        for(int i=m-1;i>=0;--i){
            if(S[i]=='.'){
                r=m-i;
                m=i-1;
                str.append(S.substr(i+1,r));
                str.append(".");
            }
        }
        str.append(S.substr(0,m+1));
        return str;
    } 
};


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
