#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(auto x:m){
            if(x.second>1)
                v.push_back(x.first);
        }
        if(v.size()==0)
            v.push_back(-1);
        else
            sort(v.begin(),v.end());
        return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
