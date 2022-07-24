/*N players played a round-robin tournament.

You are given an N-by-N table A containing the results of the matches. Let A(i,j)denote the element at the i-th row and j-th column of A.
A(i,j)  is - if i=j, and W, L, or D otherwise.
A(i,j)  is W if Player i beat Player j, L if Player i lost to Player j, and D if Player i drew with Player j.
Determine whether the given table is contradictory.

The table is said to be contradictory when some of the following holds:

There is a pair (i,j) such that Player i beat Player j, but Player j did not lose to Player i;
There is a pair (i,j) such that Player i lost to Player j, but Player j did not beat Player i;
There is a pair (i,j) such that Player i drew with Player j, but Player j did not draw with Player i.
*/

//solution

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }
    }

    for(int i=0;i<n;i++)

    {
         for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;

            else if(arr[i][j]=='w' )
            { if(arr[j][i] !='l')
            {
               cout<<"incorrect";
               return 1;
            }}
            else if(arr[i][j]=='l'){ if( arr[j][i]!='w')
            {
               cout<<"incorrect";
               return 1;

            }}
            else if(arr[i][j]=='d' ){if(arr[j][i]!='d')
            {
               cout<<"incorrect";
               return 1;

            }}


    }
    }
        cout<<"correct";return 1;

}

