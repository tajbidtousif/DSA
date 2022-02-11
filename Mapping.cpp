#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int, string> m;
    m[1] = "Tousif";
    m[3] = "SG";
    m[2] = "Tithi";
    m[4] = "Tajbid";


    map<int,string> :: iterator it;

    for(it = m.begin(); it!=m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}
