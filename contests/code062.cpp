/*
Given the integer n — the number of available blocks. You must use all blocks to build a pedestal.

The pedestal consists of 3 platforms for 2-nd, 1-st and 3-rd places respectively. The platform for the 1-st place must be strictly higher than for the 2-nd place, and the platform for the 2-nd place must be strictly higher than for the 3-rd place. Also, the height of each platform must be greater than zero (that is, each platform must contain at least one block).

Example pedestal of n=11 blocks: second place height equals 4 blocks, first place height equals 5 blocks, third place height equals 2 blocks.
Among all possible pedestals of n blocks, deduce one such that the platform height for the 1-st place minimum as possible. If there are several of them, output any of them.

Input:
The first line of input data contains an integer t (1≤t≤104) — the number of test cases.

Each test case contains a single integer n (6≤n≤105) — the total number of blocks for the pedestal. All n blocks must be used.

It is guaranteed that the sum of n values over all test cases does not exceed 106.

Output:
For each test case, output 3 numbers h2,h1,h3 — the platform heights for 2-nd, 1-st and 3-rd places on a pedestal consisting of n blocks (h1+h2+h3=n, 0<h3<h2<h1).

Among all possible pedestals, output the one for which the value of h1 minimal. If there are several of them, output any of them.
#include<iostream>
using namespace std;
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n;
        a=b=c=n/3;
        
        if(n>(a+b+c))
        {
            a+=(n-(a+b+c));
        }

      
          if(b==c || b<c)
        {
            b++;
            c--;
        }

        if(a==c || a<c)
        {
            a++;
            c--;
        }

          if(a==b || a<b)
        {
            a++;
            b--;
        }
      
        cout<<b<<" "<<a<<" "<<c;
        cout<<endl;
    }
return 0;}