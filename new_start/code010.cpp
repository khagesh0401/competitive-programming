//problem statement
/*

Chef loves bitwise operations. So, he creates the following problem but needs your help to solve it.

Chef calls a sequence of integers A1,A2,…,AN tasty if it satisfies the following condition:

parity(Ai&Ai+1)≠parity(Ai|Ai+1) for 1≤i<N.
Chef gives you a sequence A1,A2,…,AN. You may perform the following operation on the sequence any number of times (possibly 0):

Choose 2 indices i and j (1≤i,j≤n ; i≠j) and change Ai to Ai⊕Aj.
Chef is asking you to make the sequence tasty using the minimum number of operations, or report that it is impossible.

As a friendly reminder,

parity(x) denotes the remainder of dividing x by 2
& denotes the bitwise AND operation
| denotes the bitwise OR operation
⊕ denotes the bitwise XOR operation.

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output Format

For each test case:

If it is impossible to convert the given sequence into a tasty sequence using the given operations, print a single line containing the integer −1.
Otherwise, first, print a line containing a single integer M ― the minimum number of operations you have to perform.
Then, print M lines describing these operations in the order in which you want to perform them. For each k (1≤k≤M), the k-th of these lines should contain two space-separated integers i and j (1≤i,j≤n ; i≠j) ― the indices on which the k-th operation is performed.
*/#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--)
{
    // int a,b;
    // cin>>a>>b;
    // cout<<"and opertaion : "<<(a&b)<<endl;
    // cout<<"or operation : "<<(a|b)<<endl;

    // cout<<"xor opertaion : "<<(a^b)<<endl;
    int n;
    cin>>n;
    int i=0;
    int j=0;
   bool flag=false;
    int ar[n];
    for(i=1;i<=n;i++)
    {cin>>ar[i];}
        for(int i=1;i<=n;i++)
        {
            if(ar[i]%2==0)
            flag=true;
        //    //for even
        //    if(ar[i]%2==0 && ar[i+1]%2==0)
        //    {
        //        for(j=i+2;j<n;j++)
        //        {
        //            if(ar[j]%2!=0)
        //            { ar[i]=(ar[i]^ar[j]);
        //             c++;
        //             m=i;}
                    
                   
        //        }
        //    } 
    

        //         //for odd
        //     else if(ar[i]%2==1 && ar[i+1]%2==1)
        //    {
        //        for(j=i+2;j<n;j++)
        //        {
        //            if(ar[j]%2==0)
        //            { ar[i]=(ar[i]^ar[j]);
        //            c++;
        //            m=i;}
                   
        //        }
        //    }
        //    else
             
        // }
        // cout<<c<<endl;
        // cout<<i<<" "<<j;
           }
        if(flag==true)
        cout<<"-1";
     
  }
return 0;
}

//got the logic but not able to code i.e. leaving
//logic is to make a sequence of even odd even..  or odd even odd...