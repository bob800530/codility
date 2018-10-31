int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    int max = 0;
    bool findOne = false;
    while(N>0)
    {
        if((N&0x1)==1)
        {
            findOne = true;
            count = 0;
        }
        else
        {
            if(findOne)
                count++;
        }
        if(count>max)
           max = count; 
        N = N>>1;
    }
    return max;
}