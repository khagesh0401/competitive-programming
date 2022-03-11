//problem statemnet
/*
You are given a positive integer X which is at most 108.

Find three distinct non-negative integers A,B,C that do not exceed 109 and satisfy the following equation:

(A∣B)&(B∣C)&(C∣A)=X
Here, ∣ denotes the bitwise OR operator and & denotes the bitwise AND operator.

It can be shown that a solution always exists for inputs satisfying the given constraints. If there are multiple solutions, you may print any of them.

Input Format
The first line contains an integer T, the number of test cases. The description of T test cases follows.
Each test case consists of a single line containing one integer, X.

Output Format
For each test case, print on a new line three different space-separated integers A,B,C.
Your output will be considered correct only if A,B,C are distinct non-negative integers not exceeding 109 that satisfy the equation given in the problem statement.
If there are multiple solutions, you may print any of them.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"or: "<<(a|b)<<endl;
    cout<<"and: "<<(a&b)<<endl;
return 0;}
//to  be continued
//and push this to your repo in git hub