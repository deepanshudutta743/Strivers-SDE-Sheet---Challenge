#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
//better solution tc-O(N*LongN)
    //  int n = a.size(); // size of the array.

    // map<long long, int> preSumMap;
    // long long sum = 0;
    // int maxLen = 0;
    // for (int i = 0; i < n; i++) {
    //     //calculate the prefix sum till index i:
    //     sum += a[i];

    //     // if the sum = k, update the maxLen:
    //     if (sum == k) {
    //         maxLen = max(maxLen, i + 1);
    //     }

    //     // calculate the sum of remaining part i.e. x-k:
    //     long long rem = sum - k;

    //     //Calculate the length and update maxLen:
    //     if (preSumMap.find(rem) != preSumMap.end()) {
    //         int len = i - preSumMap[rem];
    //         maxLen = max(maxLen, len);
    //     }

    //     //Finally, update the map checking the conditions:
    //     if (preSumMap.find(sum) == preSumMap.end()) {
    //         preSumMap[sum] = i;
    //     }
    // }

    // return maxLen;

    int left=0,right=0;
    int n=a.size();
    long long sum=a[0];
    int maxlen=0;
    while(right<n)
    {
     //when sum exceed the k
     while(left<=right && sum>k)
     {
     sum-=a[left];
     left++;
     }
      if(sum==k)
      {
       int len=right-left+1;
       maxlen=max(maxlen,len);
      }
      right++;
      if(right<n) sum+=a[right];

    }
    return maxlen;
}