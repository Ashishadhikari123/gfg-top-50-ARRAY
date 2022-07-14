#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        unordered_map<int,int>m;
        int ans=-1;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]>1){
                ans=i+1;
                break;
            }
        }
        return ans;
    }
};

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
