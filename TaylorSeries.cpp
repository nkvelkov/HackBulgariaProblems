#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long ull;
typedef long double ld;

#define MAXN 100

ull fn[MAXN];

ull fact(ull n)
{
    if( fn[n] == 0 )
    {
        if( n < 2 )
        {
            fn[n] = 1;
        }else
        {
            fn[n] = fn[n-1] + fn[n-2];
        }
    }
    return fn[n];
}

ld sine(ld x, size_t precision)
{
    ld ans = 0;
    int sign = -1;
    int den = idx = 1;
    ld p = x*x;
   
    for(int i=1; i <= presicion; ++i)
    {
        sign *= -1;

        ans += sign * x / den;

	den *= ++idx * ++idx;
        x *= p;
    }
    return ans;
}

ld cosine(ld x, size_t precision)
{
    ld ans = 0;
    int sign = 1;
    int den = 1, idx = 0;
    ld p = x*x;
    x *= x;
    for(int i=1; i<=presicion; ++i)
    {
        sign *= -1;

        ans += sign * x / den;

	den *= ++idx * ++idx;
        x *= p;
    }

    return 1 + ans;
}

int main()
{


    return 0;
}
