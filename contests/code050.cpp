/*
You are given two integers X and Y. You need to construct two different strings S1 and S2 consisting of only the characters ‘a′ and ‘b′, such that the following conditions are satisfied:

Both S1 and S2 are palindromes.
Both S1 and S2 should contain exactly X occurrences of a and Y occurrences of b.
If there are multiple possible answers, you may print any of them. If it is not possible to construct two distinct strings satisfying the conditions, print −1 instead.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Then the test cases follow.
Each test case consists of a single line of input containing two space-separated integers X,Y.

Output Format
For each test case:

If it is not possible to construct two distinct strings satisfying the conditions, print −1
Otherwise, print two lines — the first should contain the string S1 and the second should contain S2
If there are multiple possible answers, you may print any of them.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        bool flag=false;
        cin>>x>>y;
         if(x%2==0 && y%2==0)
          flag=true;
         else if(x%2!=0 && y%2==0)
          flag=true;
         else if(x%2!=0 && y%2==0)
          flag=true;
         else
          flag=false;

          if(flag==true)
          {
              
          }

    }
return 0;
}

//wrong