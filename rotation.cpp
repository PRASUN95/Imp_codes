#include<bits/stdc++.h>
using namespace std;
string rightrotate(string s,int move)
{
    string d="",x="";int k=0;
    if(move%s.length()==0)return s;
    if(move>=s.length())move%=s.length();
    d.append(s,s.length()-move,s.length());
    x.append(s,0,s.length()-move);
    //cout<<"x "<<x<<" d "<<d;
    d.append(x);
    return d;
}
string leftrotate(string s,int move)
{
    string d="",x="";int k=0;
    if(move>=s.length())move%=s.length();
     d.append(s,0,move);
        x.append(s,move,s.length());
    x.append(d);
    return x;
}
int main()
{
	int move;
	string s;
	cin>>move>>s;
	s=rightrotate(s,move);
	cout<<"result "<<s;
}
