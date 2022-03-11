//problem statement
/*
Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.

Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, it's always possible to achieve this goal in a finite number of operations.

Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, print a single line containing one integer — the minimum number of operations that Chef has to perform to achieve the given condition.
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
      int count=0,v=0;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
        for(int i=0;i<n;i++)
        {
            v=count+i+1;
            if(v==a[i])
             count++;
        }
        cout<<count<<endl;
    }
return 0;}