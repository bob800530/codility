#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

class map_value_finder
{
    public:       
        map_value_finder(const int cmp_int):m_s_cmp_int(cmp_int){}       
    
        bool operator ()(const map<int, int>::value_type &pair)
        {            
            return pair.second == m_s_cmp_int;       
        }
    private:        
        const int m_s_cmp_int;                    
    
};

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    map<int,int> m;
    set<int> s;
    int max = -1;
    int A_size = A.size();
    for(int i=0; i<A_size; i++)
    {
        m[i] = A[i];
    }
    

    for(int i=1; i<=X; i++)
    {
        map<int, int>::iterator it = m.end();
        it = find_if(m.begin(), m.end(), map_value_finder(i));
        if (it == m.end())
        {
            return -1;
        }
        else
        {
            s.insert(it->first);
        }
    }  
    return *max_element(s.begin(),s.end());
}