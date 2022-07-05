/*
Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating X mushrooms.

Input Format
The first line of input will contain one integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer X.

Output Format
For each test case, output in a single line Mario's size after eating X mushrooms.

Print:

NORMAL, if his final size is normal.
HUGE, if his final size is huge.
SMALL, if his final size is small.
You may print each character of the answer in either uppercase or lowercase (for example, the strings Huge, hUgE, huge and HUGE will all be treated as identical).
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
        if(n%3==0)
         cout<<"normal"<<endl;
        else if((n+1)%3==0)
         cout<<"small"<<endl;
        else if((n+2)%3==0)
         cout<<"huge"<<endl;
    }
return 0;
}