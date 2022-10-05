#include<bits/stdc++.h>

using namespace std;

int longcomsubseq(char s1[], char s2[], int n1, int n2)
{
        int val[n1][n2];
        int i,j;
        for(i=0;i<=n1;i++)
        {
                for(j=0;j<=n2;j++)
                {
                        if(i==0 || j==0)
                                val[i][j] = 0;
                        else if(s1[i-1] == s2[j-1])
                                val[i][j] = val[i-1][j-1]+1;
                        else
                                val[i][j] = max(val[i-1][j],val[i][j-1]);
                }
        }
        for(i=0;i<n1;i++)
        {

                for(j=0;j<n2;j++)
                {
                        cout<<val[i][j]<<"\t";
                }
                cout<<"\n";
        }
        int maxlcs = val[n1][n2];
        int index = maxlcs-1;
        char lcs[maxlcs];
        //lcs[maxlcs] = '\0';
        i=n1;
        j=n2;
        while(i>0 && j>0)
        {
                if(s1[i-1] == s2[j-1])
                {
                        lcs[index] = s1[i-1];
                        index--;
                        i--;
                        j--;
                }
                else
                        if(val[i-1][j] > val[i][j-1])
                                i--;
                        else
                                j--;
        }
        cout<<"\nLongest Common Subsequence :- "<<lcs<<"\n";
        return val[n1-1][n2-1];
}

int main()
{
        char s1[] = "BDCABA";
        char s2[] = "ABCBDAB";
        int n1,n2;
        n1 = sizeof(s1)/sizeof(s1[0]);
        n2 = sizeof(s2)/sizeof(s2[0]);
        int lcs = longcomsubseq(s1,s2,n1,n2);
        cout<<"The length of longest subsequence is :- "<<lcs;
        return 0;
}

