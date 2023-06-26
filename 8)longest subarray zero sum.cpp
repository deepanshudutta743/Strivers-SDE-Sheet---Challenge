#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > a) {

  // Write your code here
// int n=arr.size();
//    // Brute force
//    int ans=0;
//    int sum=arr[0];
//    for(int i=0;i<n;i++)
//    {
//      int cnt=1;
     
//      for(int j=i+1;j<n;j++)
//      {
//       sum+=arr[j];
//       cnt++;
         
//       if(sum==0)
//      {
//        ans=max(ans,cnt);
//      }
//      }
//      if(i<n)
//      sum=arr[i+1];
//      cnt=0;
//    }
//   return ans;
best solution
o(n2)
    int n = a.size(); // size of the array.
  int k=0;
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;


}