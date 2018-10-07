// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>&s(A);
    sort(s.begin(),s.end());
    long ans = 0; 
    for(unsigned int i=0; i<s.size()-2; i++)
    {
        if(i==0)
        {
            ans = (long)s[i]*(long)s[i+1]*(long)s[i+2];
        }
        else
        {
            if((long)s[i]*(long)s[i+1]*(long)s[i+2]>ans)
            {
                ans = (long)s[i]*(long)s[i+1]*(long)s[i+2];
            }
        }
    }
    if((long)s[0]*(long)s[1]*(long)s[s.size()-1]>ans)
    {
        return (long)s[0]*(long)s[1]*(long)s[s.size()-1];
    }
    else
        return ans;
}