#include<iostream>
#include<map>
#include<string>
using namespace std;

    typedef map<string,int>::iterator m_iter;
int main() {
    map<string,int> m;
    int t ;
    cin >> t;
    // getting the input 
    for ( int i = 0 ; i < t; i++ ){
        int temp ;
        cin >> temp;
        pair<string,int> p;
        string h;
        m_iter itr;


        switch(temp){
            case 1:
                
                cin >>p.first;
                cin>>p.second;
                
                itr = m.find(p.first);
                if(itr != m.end()){m[p.first] += p.second;} else {
                m.insert(p); }
                break;
            case 2: 
                cin >> h;
                itr = m.find(h);
                if(itr != m.end()) {m[h] = 0 ;}
                break;
            case 3:
                cin>>h;
                itr = m.find(h);
                if(itr != m.end()) {cout<<m[h]<<endl ;} else {cout << 0 <<endl;}

                break;
        }
    
        } 
    return 0;}
