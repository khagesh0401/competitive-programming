//problem statement
/*
A (1-indexed) binary string S of length N is called a xor palindrome if the value of Si⊕S(N+1−i) is the same for all 1≤i≤N.

For example, 0, 1111 and 0101 are xor palindromes, while 1110 and 110101 are not.

You are given a binary string S of length N. Determine if it is possible to rearrange it to form a xor palindrome or not.

Input Format

The first line of input contains a single integer T — the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N — the length of the binary string S.
The second line of each test case contains the binary string S containing 0s and 1s only.
Output Format

For each test case, output YES if it is possible to rearrange S to convert it into a xor palindrome. Otherwise output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int count=0;
        if(n%2==0)
        {
         for(int i=1;i<=n;i++)
         {
            if(s[i]==1)
             count++;}
                if(count%2==0)
                 cout<<"YES"<<endl;
                else
                 cout<<"NO"<<endl;
        }
        
        
        else if(n%2==1)
        {
         for(int i=1;i<=n;i++)
         {
            if(s[i]==1)
             count++;}
            if(count%2==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
return 0;}