int findMin(int arr[], int n){
        int minValue=arr[0];
        for(int i=1;i<n;i++)
        {
            minValue=min(minValue,arr[i]);
        }
        return minValue;
    }
