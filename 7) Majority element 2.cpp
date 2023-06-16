#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
   //brute force
//    int n=arr.size();
//    vector<int>  ls;
//    for(int i=0;i<n;i++)
//    {
//     int cnt=0;
//     if( ls.size()==0 || ls[0]!=arr[i])
//     {
//     for(int j=0;j<n;j++)
//     {
//         if(arr[i]==arr[j]) cnt++;
//     }
//     if(cnt>(n/3)) ls.push_back(arr[i]);
//     }
//     if(ls.size()==2) break;

//    }
    
//  return ls;

// better solution tc O(N)
// unordered_map<int,int> mp;
// vector<int> ans;
// int n=arr.size();
// for(int i=0;i<n;i++)
// {
//     mp[arr[i]]++;
//     if(mp[arr[i]]==floor(n/3)+1) ans.push_back(arr[i]);

// }
// return ans;

// optimal opproach
    int n = arr.size(); //size of the array

    int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; // element 1
    int el2 = INT_MIN; // element 2

    // applying the Extended Boyer Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != arr[i]) {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if (cnt2 == 0 && el1 != arr[i]) {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if (arr[i] == el1) cnt1++;
        else if (arr[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }

    vector<int> ls; // list of answers

    // Manually check if the stored elements in
    // el1 and el2 are the majority elements:
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el1) cnt1++;
        if (arr[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);

    // Uncomment the following line
    // if it is told to sort the answer array:
    // sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);

    return ls;




}