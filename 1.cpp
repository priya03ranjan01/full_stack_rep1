#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,p,x,a,b;
    vector<int> v;
   
    
        v.push_back(1);
        v.push_back(4);
        v.push_back(6);
        v.push_back(2);
        v.push_back(8);
        v.push_back(9);
     
 for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+(2-1));
     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    

    
    return 0;
}
