int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int A_size = A.size();
    int counter = 0;
    for(int i = 0; i<A_size; i++)
    {
        counter = 0;
        for(int j = 0; j<A_size; j++)
        {
            if(A[i]==A[j])
            {
                counter++;
            }
        }
        if(counter%2 == 1)
        {
            return A[i];
        }
    }
}