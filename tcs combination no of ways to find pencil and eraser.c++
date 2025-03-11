/*
A boy enters a stationery shop. There are N number of pencils and M number of erasers available in the shop. But the boy's mother insists that he can 
buy only P number of pencils and E number of erasers. The task here is to find the number of ways the boy can choose 'P' pencils and 'E' erasers 
from the available N and M pencils & erasers respectively.

Note:
The boy can choose in any order.
N-number of pencils available in the shop
M-number of erasers available in the shop
P-number of pencils he can choose to buy from N
E-number of erasers he can choose to buy from M
Input:
3 Value of N 
1 Value of M 
2 Value of P 
1 Value of E 

Output:
3  Number of ways we can choose

Input:
5->Value of N
3->Value of M
5->Value of P
3->Value of E

Output:
1
*/

#include<iostream>

using namespace std:

int fac(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int countwaystochoose(int n,int m,int p, int e)
{
    //calculate the no of ways to choose pencils
    int waystopencil= fac(n)/fac(p)*fac(n-p);
    //calculate the no of ways to choose erasers
    int waystoeraser= fac(m)/ fac(e)* fac(m-e);
}
int main()
{
    int n,m,p,e;
    cin>>n>>m>>p>>e;
    int ways= countwaystochoose(n,m,p,e);
    cout<<ways;
}
