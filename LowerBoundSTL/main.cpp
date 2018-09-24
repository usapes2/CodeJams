#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::vector<int> vi;
typedef std::vector<int>::size_type vi_sz;
typedef std::vector<int>::const_iterator vi_iter;
using namespace std;

class IsLessThan{
    public:
        IsLessThan (double x = 0.0) : val(x) {}

        bool operator() (double x) const
        {return (x>val);}

    private:
        double val;
};
int main () {
    vi v;    
    int t;
    cin >> t; // read t. cin knows 
    for ( int i = 0; i < t ; ++i) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cin>> t;
    int q;

    for( vi_sz i=0 ; i < t; ++i)
    {
        cin >> q;
        vi_iter itr = lower_bound(v.begin(), v.end(), q);
     
        if(*(itr) == q) 
            cout << "Yes "<<itr - v.begin()+1<<endl;
        else
            cout <<"No "<< itr - v.begin()+1<<endl;
    }
//    pr(v);

    return 0;
}
