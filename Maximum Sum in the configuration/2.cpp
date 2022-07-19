int max_sum(int A[],int N)
{
    int sum=0,s0=0;
    for(int i=0;i<N;i++)
    {
        sum += A[i];
        s0 += A[i]*i;
    }
    // cout<<"sum of array elements "<<sum<<endl;
    // cout<<"value of s0 is "<<s0<<endl;
    int max=s0;
    int si=s0;
    for(int i=0;i<N-1;i++)
    {
        int sip1 = si+sum-(N*A[N-i-1]);
        // cout<<"value of sip1 = "<<sip1<<endl;
        if(sip1>max)
            max = sip1;
        si=sip1;
    }
    return max;
}
