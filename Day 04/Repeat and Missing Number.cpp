#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int>v(n+1,0);
	for(int i=0; i<n; i++)
	{
		v[arr[i]]++;
	}
	int m,r;
	for(int i=1; i<=n; i++)
	{
		if(v[i]==0)
			m=i;
		else if(v[i]==2)
			r=i;
	}
	return make_pair(m,r);
	
}
