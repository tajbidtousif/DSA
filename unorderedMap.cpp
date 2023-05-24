#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<long, long> m;
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    
    
    for(int i=0; i<n; i++)
    {
        m[ar[i]]++;
    }
    int rtn = false;
    for(int i=0; i<n; i++)
    {
        if(m[ar[i]] > 1)
        {
            rtn =  true;
        }
    }
    if(rtn!=true)
    {
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }
}