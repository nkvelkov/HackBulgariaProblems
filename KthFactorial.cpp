#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long ull;

#define MAXN 100
#define sqrtFive sqrt(5)
#define long double ld
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

ld power(ld x, ull n)
{
    if( n == 0 ) return 1;
    if( n % 2 ) return x * power(x, n-1);

    ld half = power( x, n/2 );

    return half * half;
}с

ull fac(ull n)
{
    ld multiplier = 1 / sqrtFive;
    ld c1 = (1 + sqrtFive) / 2;
    ld c2 = (1 - sqrtFive) / 2;
    return round(multiplier * (pow(c1, n) - pow(c2, n)) );
}

ull kthfactorial(ull k, ull n)
{
    return power(fact(n), k);
    //return pow(fac(n), k);
    // za dostaty4no golemi stoinosti na n e udobno da izpolzvame fac vmesto fact;

}

int main()
{


    return 0;
}
