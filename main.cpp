/**********************************************************************
CREATOR : AMLAN MUKHERJEE
PROBLEM : PRETTY JSON
**********************************************************************/

#include <bits/stdc++.h>
using namespace std;

vector<string> sol(string a)
{
    int c=0;
    string b;
    vector<string> d;
    for(auto i=0; i<a.length(); i++)
    {
        if(a[i]=='[' || a[i]=='{')
        {
            
            if(i==0)
            {   b += a[i];
                b += '\n';
                b.append(string(++c, '\t'));
            }
            else{
                b += '\n';
                b.append(string(c, '\t'));
                b += a[i];
                c++;
                b += '\n';
                b.append(string(c, '\t'));
            }
        }
        else if(a[i]==',')
        {
            b += a[i];
            b += '\n';
            b.append(string(c, '\t'));
        }
        else if(a[i]==']' || a[i]=='}')
        {
            c--;
            b += '\n';
            b.append(string(c, '\t'));
            b += a[i];
        }
        else{
            b += a[i];
        }
    }
    d.push_back(b);
    return d;
}
int main() {
    string A;
    vector<string> b;
    cin >> A;
    b = sol(A);
    for(auto x: b)
    {
        cout<< x;
    }
    return 0;
}


