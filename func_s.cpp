#include "sortic.h"
void sa(vector<int> &a)
{
    if(a.size() >= 2)
    {
        int num = a[1];
        a[1] = a[0];
        a[0] = num;
    }
}

void sb(vector<int> &b)
{
    if(b.size() >= 2)
    {
        int num = b[1];
        b[1] = b[0];
        b[0] = num;
    }
}

void ss(vector<int> &a, vector<int> &b)
{
    sa(a);
    sb(b);
}
