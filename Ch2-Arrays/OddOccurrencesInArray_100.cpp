int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int A_size = A.size();
    int result = 0;
    for(int i = 0; i<A_size; i++)
    {
        result ^= A[i];
    }
    return result;
}