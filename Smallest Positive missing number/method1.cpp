#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int maxValue=arr[0];
        int ans=-1;
        for(int i=1;i<n;i++)
        {
            maxValue=max(maxValue,arr[i]);
        }
        vector<int>v(maxValue+2,0);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                v[arr[i]]++;
            }
        }
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    } 
};

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
