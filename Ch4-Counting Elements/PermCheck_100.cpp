// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s;
    int A_size = A.size();
    for(int i = 0; i<A_size; i++)
    {
        s.insert(A[i]);
        if(A[i]>A_size)
            return 0;
    }
    for(int i = 1; i<A_size+1; i++)
    {
        if(s.count(i)==0)
            return 0;
    }
    return 1;
}