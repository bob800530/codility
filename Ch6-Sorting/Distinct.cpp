#include <algorithm>
#include <set>
int solution(vector<int> &A) {
    set<int> s1;

    for(int i=0; i < A.size(); i++)
    {
        if(s1.count(A[i])==0)   
        {
            s1.insert(A[i]);
        }
    }
    return s1.size();
}