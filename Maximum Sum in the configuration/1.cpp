int max_sum(int A[],int N)
{
    int ans=INT_MIN;
    for(int i=0;i<N;i++)
    {
        int sum=0;
        for(int j=0;j<N;j++)
        {
            int current_index = (i+j)%N;
            sum += A[current_index]*j;
        }
        ans=max(ans,sum);
    }
    return ans;
}
