int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long A_size = A.size();
    long total = (1 + A_size)*A_size / 2;
    long sum = 0;
    for(int i = 0; i<A_size; i++)
    {
        sum += A[i];
    }

    if(total == sum)
        return 1;
    else
        return 0;
}