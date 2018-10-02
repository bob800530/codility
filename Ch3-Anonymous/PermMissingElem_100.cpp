// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long A_size_plus = A.size()+1;
    long total = (1 + A_size_plus)*A_size_plus / 2;
    
    for(int i = 0; i<A.size(); i++)
    {
        total = total - A[i];
    }
    
    return total;
}