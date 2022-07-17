bool find3Numbers(int A[], int n, int X)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((A[i]+A[j]+A[k])==X){
                    return true;
                    }
                }
            }
        }
        return false;
    }
