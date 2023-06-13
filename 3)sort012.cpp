#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){


	// Brute force o(nlog)
	// sort(arr.begin(),arr.end());

	// for(int i=0;i<n;i++)
	// {
	// 	if(arr[i]==arr[i+1])
	// 	{
	// 		return arr[i];
	// 	}
	// }
	//

    // optimal
	//Brute force
	// unordered_map<int,int> mp;
	// for(int i=0;i<arr.size();i++)
	// {
	// 	mp[arr[i]]++;
	// } 
	// int ans=-1;
	// for(auto m:mp)
	// {
	// 	if(m.second>1)
    //     {
	// 		ans=m.first;
	// 		break;
	// 	}
	// }
	// return ans;


	// optimized
	int slow=arr[0];
	int fast=arr[0];

	do{
		slow=arr[slow];
		fast=arr[arr[fast]];

	}while(slow!=fast);

	fast=arr[0];

	while(slow!=fast)
	{

    slow=arr[slow];
	fast=arr[fast];
	}

	return slow;

}
