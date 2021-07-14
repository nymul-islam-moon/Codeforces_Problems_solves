#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c1=1;
		string s;
		int n,m=0,t=0;
		cin>>n>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='T')
			{
				t++;
			}
			else
			{
				m++;
			}
			if(m>t)
			{
				c1=0;
			}
		}
		t=0,m=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='T')
			{
				t++;
			}
			else
			{
				m++;
			}
			if(m>t)
			{
				c1=0;
			}
		}
		if(c1&&m*2==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
 }