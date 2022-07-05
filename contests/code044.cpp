/*
Dazzler has a blank canvas and (N−1) colours numbered from 2 to N.
Let B denote the beauty of the canvas. The beauty of a blank canvas is 1.

Dazzler paints the canvas by using all the (N−1) colours exactly once. On applying the ith colour (2≤i≤N):

If i is odd, B=B & i.
If i is even, B=B⊕i.
Find the beauty of the canvas after applying all (N−1) colours.

Note: The colours are applied in ascending order. Colour number 2 is applied first. The ith numbered colour is applied after (i−1)th numbered colour for all i>2.

Here & and ⊕ denote the bitwise AND and bitwise XOR operations respectively.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a single integer N.

Output Format
For each test case, output a single integer, the beauty of the canvas after applying all (N−1) colours.
*/
#include<bits/stdc++.h>
using namespace std;

int xorr(int i,int b)
{
return(b^i);
}

int aand(int i,int b)
{
    return(b&i);
}
int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
         int b=1;
         int n;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
        
            if(i%2==0)
             b=xorr(i,b);
            else
             b=aand(i,b);

        }
        cout<<b<<endl;
    }
return 0;}