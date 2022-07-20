int findMin(int arr[], int n){
        int l=0,h=n-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(arr[mid]==arr[h])
                h=h-1;
            else
            if(arr[mid]>arr[h])
                l=mid+1;
            else
                h=mid;
        }
        return arr[h];
    }
