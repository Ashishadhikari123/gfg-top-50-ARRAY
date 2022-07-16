class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0){
                ans=i;
                break;
            }
        }
        if(ans==-1)
            ans=n+1;
        return ans;
    }
};
