ll mod = 1e9 + 7 ;
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
           {
               result *= base; 
               result %= mod ;
           } 
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
        base %= mod ;
    }

    return result;
}
