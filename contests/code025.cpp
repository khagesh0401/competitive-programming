/*
According to the new tax scheme, a new tax called the binary string tax was introduced! JJ has a binary string S of length N. According to the tax scheme, for every occurrence of 01 in S, a tax of X rupees will be charged, while for every occurrence of 10 in S, a tax of Y rupees will be charged.

For example, if X=5, Y=7 and S=11010, then S has 1 occurrence of 01 and 2 occurrences of 10, so the tax charged =5⋅1+7⋅2=19

JJ can rearrange the string S in any way he wants. He wants to minimize the amount of tax he has to pay. Can you help him do so?

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains three integers N, X and Y - the length of the binary string S, the tax charged on an occurrence of 01 and the tax charged on an occurrence of 10.
The second line of each test case contains a binary string S of length N containing 0s and 1s only.

Output Format
For each test case, output the minimum amount of tax that JJ has to pay.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int c1=0,c2=0;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        
        cin>>n>>x>>y;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if((s[i]==1 && s[i+1]==0))
             c1++;;
            if((s[i]==0 && s[i+1]==1))
             c2++;
        }
          cout<<(c1*y)+(c2*x)<<endl;
    }
return 0;
}