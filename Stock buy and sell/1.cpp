#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums{100,180,260,310,40,535,695};
    int n = nums.size();
    int startIndex=-1,endIndex=-1,x=0;
    vector<pair<int,int>>ans;
    vector<int>v1;
    for(int i=1;i<nums.size();i++)
    {
        if((nums[i]>nums[i-1]) && x==0){
            x=1;
            startIndex=i-1;
            // v1.push_back(startIndex);
        }
        else
        if(nums[i]<nums[i-1] && x==1){
            x=0;
            endIndex=i-1;
            // v1.push_back(endIndex);
            ans.push_back({startIndex,endIndex});
            // cout<<"start Index = "<<startIndex<<" and end index = "<<endIndex<<endl;
        }
    }
    if(x==1){
        ans.push_back({startIndex,n-1});
        // cout<<"start Index = "<<startIndex<<" and end index = "<<n-1<<endl;
    }
    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
        // ans.push_back({startIndex,endIndex});
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
