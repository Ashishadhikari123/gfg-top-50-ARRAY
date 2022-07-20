vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>ans;
            unordered_map<int,int>m1,m2;
            for(int i=0;i<n2;i++)
                m1[B[i]]++;
            for(int i=0;i<n3;i++)
                m2[C[i]]++;
            for(int i=0;i<n1;i++)
            {
                if(m1[A[i]]>0 && m2[A[i]]>0)
                {
                    // ans.push_back(A[i]);
                    auto it = find(ans.begin(),ans.end(),A[i]);
                    if(it==ans.end())
                        ans.push_back(A[i]);
                    m1[A[i]]-=1;
                    m2[A[i]]-=1;
                }
            }
            return ans;
        }
