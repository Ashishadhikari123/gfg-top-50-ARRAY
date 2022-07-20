long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        for(int i=0;i<=n-m;i++)
        {
            int diff=a[i+m-1]-a[i];
            if(diff<ans)
                ans=diff;
        }
        return ans;
    }
