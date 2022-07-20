vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>ans;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    ans.push_back(A[i]);
                    i+=1;
                    j+=1;
                    k+=1;
                }
                else
                if(A[i]<B[j])
                    i+=1;
                else
                if(B[j]<C[k])
                    j+=1;
                else
                    k+=1;
                int prev1=A[i-1];
                while(A[i]==prev1)
                    i+=1;
                int prev2=B[j-1];
                while(B[j]==prev2)
                    j+=1;
                int prev3=C[k-1];
                while(C[k]==prev3)
                    k+=1;
            }
            return ans;
        }
