#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        
        int ans=0,ele;
        unordered_map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        for(auto x : m)
        {
            if(x.second>ans)
            {
                ans=x.second;
                ele=x.first;
            }
        }
        if(ans>size/2)
            return ele;
        else
            return -1;
        
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
