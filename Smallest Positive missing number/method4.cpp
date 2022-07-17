class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int element=nums[i];
            // int chair=element-1;
            if(element>=1 && element<=n)
            {
                if(nums[element-1]!=element){
                    swap(nums[element-1],nums[i]);
                    i-=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
    }
};
