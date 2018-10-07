// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>&s(A);
    sort(s.begin(), s.end());
    int s_size = s.size();
    
    for(int i=0; i<s_size-2; i++)
    {
        long sum = (long)s[i]+(long)s[i+1];
        if(sum>(long)s[i+2])
        {
            return 1;
        }
    }
    return 0;
    
}