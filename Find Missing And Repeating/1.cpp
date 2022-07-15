#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        unordered_map<int,int>m;
        int missing=0,repeating=0;
        int *ans=new int[2];
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0)
                missing=i;
            else
            if(m[i]==2)
                repeating=i;
        }
        ans[0]=repeating;
        ans[1]=missing;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  
