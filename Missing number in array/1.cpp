#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        long long sum = (n*(n+1))/2;
        long long sum1=0;
        for(int i=0;i<array.size();++i)
        {
            sum1+=array[i];
        }
        return sum-sum1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  
