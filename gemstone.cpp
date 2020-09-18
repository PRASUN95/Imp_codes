#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    int cnt[26];string s;
    memset(cnt,0,sizeof(cnt));
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(cnt[s[i]-'a']==j-1)cnt[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
       if(cnt[i]==n)c++;
    }
    cout<<c;
}

