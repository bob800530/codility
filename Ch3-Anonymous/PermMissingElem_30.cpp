// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ans;
    bool isMatch;
    for(int i = 1; i<A.size(); i++)
    {
        isMatch = false;
        for(int j = 0; j<A.size(); j++)
        {
            if(i == A[j])
            {
                isMatch = true;
                break;
            }
        }
        if(!isMatch)
            return i;
    }
}