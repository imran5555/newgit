#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int c=0;
	int n=s.size();
	if(s[0]!=s[1])
		c++;
	if(s[n-1]!=s[n-2])
		c++;
	if(n>2)
	{
		for(int i=1;i<n-1;i++)
		{
			if(s[i]!=s[i+1] || s[i]!=s[i-1])
				c++;
		}
	}
	if(n==1)
		cout << "0" << endl;
	else
	 cout << c<<endl;
}