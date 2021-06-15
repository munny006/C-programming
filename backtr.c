#include<bits/stdc++.h>
using namespace std;

void permutation(string str, int left,int k, int right)
{
    if (left == k)
    {
        for(int i =0; i<left; i++)
            cout<<str[i];
        cout<<endl;
    }
    else
    {

        for (int i = left; i <right; i++)
        {
            swap(str[left], str[i]);
            permutation(str, left+1,k, right);
        }
    }
}

int main()
{


    char alphabet[15] ="abcdefghijkl";
    int n,r;
    cin>>n>>r;

    char str[12] ;
    for(int i = 0; i<n; i++)
        str[i] = alphabet[i];
    str[n] = '\0';
    char data[r];
    permutation(str, 0,r, n);
    return 0;
}
