#include<bits/stdc++.h>
using namespace std;
int count_set_bits_hack(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int earthLevel(int k){

    return count_set_bits_hack(k);
}