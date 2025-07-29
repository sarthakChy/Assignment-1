#include<bits/stdc++.h>
using namespace std;

string rev(string &s)
{
    int i=0,j=s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}

int main()
{
    string s;
    cout<<"Enter string to reverse: ";
    cin>>s;
    cout<<"Original string: "<<s<<endl;
    cout<<"Reversed string: "<<rev(s)<<endl;

    return 0;
}
