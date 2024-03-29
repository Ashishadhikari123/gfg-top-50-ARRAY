#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int pointer=0,i=0;
        long long sum=0;
        for(i;i<n;i++)
        {
            sum+=arr[i];
            if(sum>s){
                while(sum>s && pointer<i){
                    sum-=arr[pointer];
                    pointer+=1;
                }
            }
            if(sum==s)
                return {pointer+1,i+1};
        }
        return {-1};
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
