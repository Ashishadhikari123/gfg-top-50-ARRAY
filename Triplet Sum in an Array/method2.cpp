bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            sum=A[i];
            int l=i+1;
            int h=n-1;
            while(l<h)
            {
                if((sum+A[l]+A[h])==X)
                    return true;
                else
                if((sum+A[l]+A[h])>X)
                    h-=1;
                else
                    l+=1;
            }
        }
        return false;
    }
