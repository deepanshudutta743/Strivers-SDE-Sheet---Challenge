#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	//Brute force
	unordered_map<int,int> mp;
	for(int i=0;i<arr.size();i++)
	{
		mp[arr[i]]++;
	} 
	int ans=-1;
	for(auto m:mp)
	{
		if(m.second>1)
        {
			ans=m.first;
			break;
		}
	}
	return ans;
}
