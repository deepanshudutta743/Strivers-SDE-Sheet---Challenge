#include <bits/stdc++.h> 
struct meeting{
    int starting;
    int ending;
    int position;
};
bool comparator(struct meeting m1,meeting m2)
{
if(m1.ending<m2.ending) return true;
else if(m1.ending>m2.ending) return false;
else if(m1.position<m2.position) return true;
else return false;


}
// TC:(O(N)+O(NlogN)+O(N))
// SC:O(N)

int maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();
    struct meeting meet[n];

    // insert all data into the datastructure
    for(int i=0;i<n;i++)
    {
        meet[i].starting=start[i],
        meet[i].ending=end[i];
        meet[i].position=i+1;
    }
    sort(meet,meet+n,comparator);
    vector<int> ans;
    int anscount=1;
    int limit=meet[0].ending;

    for(int i=1;i<n;i++)
    {
        if(meet[i].starting>limit)
        {
            limit=meet[i].ending;
            anscount++;
        }
    }
    
    return anscount;
    

}