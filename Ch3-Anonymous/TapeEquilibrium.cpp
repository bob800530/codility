// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0;
    int diff = 0;
    int min;
    for(int i = 0; i<A.size(); i++)
    {
        sum += A[i];
    }
    for(int i = 0; i<A.size()-1; i++)
    {
        diff = 0;
        sum = sum - 2*A[i];
        diff = abs(sum);
        if(i == 0)
        {
            min = diff;
        }
        else
        {
            if(diff < min)
                min = diff;
        }
    }
    return min;
}