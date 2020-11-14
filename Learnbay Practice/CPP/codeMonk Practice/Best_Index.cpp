/*
Saurabh Joshi
IIIT Jabalpur
*/
#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define endl "\n"
#define eps 0.00000001
#define check(a , b , c) assert(a >= b && a <= c)
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
LL p[100001];
int main()
    {
        ios_base::sync_with_stdio(0);
		int n;
		cin >> n;
		assert(n <= 100000);
		for(int i = 1; i <= n; i++)
			{
				LL val;
				cin >> val;
				assert(abs(val) <= 10000000);
				p[i] = p[i - 1] + val;
			}
		LL ans = -1000000000;
		for(int i = 1; i <= n; i++)
			{
				LL l = 1 , r = n;
				LL temp = 0;
				while(l <= r)
					{	
						LL mid = (l + r) / 2;
						if(((mid * (mid + 1)) / 2) + i - 1 <= n)
							{
								temp = max(temp , mid);
								l = mid + 1;
							}
						else
								r = mid - 1;
					}
				LL cnt = (temp * (temp + 1)) / 2;
				ans = max(ans , p[i + cnt - 1] - p[i - 1]);
			}
		cout << ans;
		
	}
