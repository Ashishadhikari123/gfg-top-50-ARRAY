int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int>s;
        int minValue=min(n,m);
        for(int i=0;i<minValue;i++)
        {
            s.insert(a[i]);
            s.insert(b[i]);
        }
        if(n>m)
        {
            for(int i=m;i<n;i++)
                s.insert(a[i]);
        }
        else
        if(m>n)
        {
            for(int i=n;i<m;i++)
                s.insert(b[i]);
        }
        return s.size();
    }
