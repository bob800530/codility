// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <set>

int solution(int X, vector<int> &A) {
 // write your code in C++11 (g++ 4.8.2)
    set<int> s;
    int A_size = A.size();
    for (int i = 0; i < A_size; i++) 
    {
        s.insert(A[i]);
        if (s.size() == X) 
            return i;
    }
    return -1;    
}