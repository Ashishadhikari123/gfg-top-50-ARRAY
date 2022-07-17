int maxIndexDiff(int A[], int N) 
    { 
        int right_max[N];
        right_max[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--)
            right_max[i]=max(right_max[i+1],A[i]);
        int ans=-1;
        int i=0,j=0;
        while(i<N && j<N)
        {
            if(A[i]<=right_max[j])
            {
                ans=max(ans,j-i);
                j+=1;
            }
            else
            i+=1;
        }
        return ans;
    }
