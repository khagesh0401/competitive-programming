//problem statement
/*
There are three cities and thus three EVMs. An insider told Chef that his party got A,B,C votes respectively in these three cities according to the EVMs. Also, the total number of votes cast are P,Q,R respectively for the three cities.

Chef, being the party leader, can hack at most one EVM so that his party wins. On hacking a particular EVM all the votes cast in that EVM are counted in favor of Chef's party.

A party must secure strictly more than half of the total number of votes cast in order to be considered the winner. Can Chef achieve his objective of winning by hacking at most one EVM?

Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing six space-separated integers — in order, A,B,C,P,Q,R.

Output Format
For each test case, output in a single line the answer — "YES", if Chef can win the election after hacking at most one EVM and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int maxv=max({a+b+r,a+q+c,p+b+c});
       float y=(p+q+r)/2;
        if(maxv>y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}