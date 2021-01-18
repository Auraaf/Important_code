#define ll long long
#define ull unsigned ll

ull fact(ull n) 
{ 
    ull res = 1; 
    for (ull i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
  
ull nCr(ull n, ull r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
