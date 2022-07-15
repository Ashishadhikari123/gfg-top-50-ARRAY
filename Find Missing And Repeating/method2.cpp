#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans=new int[2];
        int missing=-1,repeating=-1;
        for(int i=0;i<n;i++)
        {
            int index=(abs(arr[i])-1);
            if(arr[index]>0)
                arr[index]*=-1;
            else{
                repeating=abs(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0){
                missing=i+1;
                break;
            }
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
