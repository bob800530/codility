int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int A_size = A.size();
    for(int i=0; i<A_size; i++)
    {
        for(int j=0; j<A_size; j++)
        {
            if(A[i]<A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(int i=0; i<A_size-2; i++)
    {
        if(A[i]+A[i+1]>A[i+2])
        {
            return 1;
        }
    }
    return 0;
    
}