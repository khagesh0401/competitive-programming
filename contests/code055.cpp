/*
Tonmoy has a special torch. The torch has 4 levels numbered 1 to 4 and 2 states (On and Off). Levels 1,2, and 3 correspond to the On state while level 4 corresponds to the Off state.

The levels of the torch can be changed as:

Level 1 changes to level 2.
Level 2 changes to level 3.
Level 3 changes to level 4.
Level 4 changes to level 1.
Given the initial state as K and the number of changes made in the levels as N, find the final state of the torch. If the final state cannot be determined, print Ambiguous instead.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N,K - the number of changes made in the levels and initial state of the torch. Here, K=0 denotes Off state while K=1 denotes On state.
Output Format
For each test case, output in a single line, the final state of the torch, i.e. On or Off. If the final state cannot be determined, print Ambiguous instead.

You may print each character of the string in uppercase or lowercase (for example, the strings On, ON, on and oN will all be treated as identical).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;

        if(k==0 && n%4==0)
        {cout<<"off"<<endl;}
        else if(k==0 && n%4!=0)
         {cout<<"on"<<endl;}
        else if(k==1 && n%4==0)
        {cout<<"on"<<endl;}
        else
        {cout<<"ambiguous"<<endl;}
    }
return 0;
}