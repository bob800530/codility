// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int A_size = A.size();
    vector<int> temp(A_size);
    while(K>0)
    {
        for(int i = 0; i < A_size; i++)
        {
            if(i == 0)
            {
                temp[i] = A[A_size-1];
            }
            else
            {
                temp[i] = A[i-1];
            }
        }
        K--;
        A = temp;
    }
    return A;
}
