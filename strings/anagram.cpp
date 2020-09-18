#include <bits/stdc++.h>

using namespace std;

int anagaram(string s){
      int l=s.length(),cnt[26],cnt1[26],sum=0;
    memset(cnt,0,sizeof(cnt));
    memset(cnt1,0,sizeof(cnt1));
    if(l%2!=0)return -1;
    if(l==2)
    {
        if(s[0]!=s[1])return 1;
        else return -1;
    }
    for(int i=0;i<l;i++)
    {
        if(i>=l/2)cnt1[s[i]-'a']++;
        else cnt[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
       if(cnt1[i]!=0)
       {
           if(cnt[i]<=cnt1[i]) //very important condition
           sum+=abs(cnt1[i]-cnt[i]);
       }
    }
    return sum;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = anagaram(s);
        cout << result << endl;
    }
    return 0;
}

