#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.

//brute force
 //tc o(n2)
//  for(int i=0;i<n;i++)
//  {
//    int cnt=0;
//    int ele=arr[i];
//    for(int j=0;j<n;j++)
//    {
//        if(arr[j]==ele)
//        cnt++;

//    }
//    if(cnt>n/2) return ele;

//  }
//  return -1;

// better solution
//O(n*logn) sc O(n)
// unordered_map<int,int> mp;

// for(int i=0;i<n;i++)
// {

//     mp[arr[i]]++;
// }
// for(auto m:mp)
// {
//     if(m.second>n/2)
//     return m.first;
// }
// return -1;







//optimal
// tc O(n) sco(1)
//Moore's Voting Algorithm 
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;

}