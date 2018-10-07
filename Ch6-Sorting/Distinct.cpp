 you can use includes, for example
#include algorithm
#include set
 you can write to stdout for debugging purposes, e.g.
 cout  this is a debug message  endl;

int solution(vectorint &A) {
     write your code in C++14 (g++ 6.2.0)
    setint s1;

    for(int i=0; iA.size(); i++)
    {
        if(s1.count(A[i])==0)   
        {
            s1.insert(A[i]);
        }
    }
    return s1.size();
}