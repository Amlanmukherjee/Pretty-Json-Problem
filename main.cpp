/**********************************************************************
CREATOR : AMLAN MUKHERJEE
PROBLEM : PRETTY JSON
**********************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c=0;
    string a,b;
    cin >> a;
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
    for(auto i=0; i<b.length(); i++)
    {
        cout<< b[i];
    }
    return 0;
}

