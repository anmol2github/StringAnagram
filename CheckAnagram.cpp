#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;int flag=0;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1.length()!=s2.length())
        {
            cout<<"Not Anagram";
        }
        else
        {
            for(int i=0;i<s1.length();i++)
            {
                if(s1[i]!=s2[i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"Anagram";
        }
        else
        {
            cout<<"Not Anagram";
        }
    }
}
