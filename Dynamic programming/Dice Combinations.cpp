  
/*  
    author - Kausar Ahamed 
    college - CTAE, Udaipur
*/


#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define vi            vector<int>
#define vll           vector<long long int>
#define ff            first
#define ss            second
#define ins           insert
#define endl          "\n"
#define pie_op        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define tc            int tc;cin>>tc;while(tc--)
#define pb            push_back
#define input(n)      int arr[n];for(int i1=0;i1<n;i1++)cin>>arr[i1]
#define lb(x)         lower_bound(x)
#define ub(x)         upper_bound(x)
#define bp(x)         __builtin_popcount(x)
//#define ffo('ffox')   find_first_of('ffox')     //Searches the string for the first character that matches any of the characters specified in its arguments.
const ll mod = 1000000007;

int main(){
	pie_op;
//    tc{
    	ll n;
    	cin >> n;
    	vll dp(n + 1, 0);
		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			ll s = 0, j = 1;
			while(i - j >= 0 && j <= 6){
				s += dp[i - j];
				j++;
			}
			dp[i] = s % mod;
		}		
		cout << dp[n] % mod;
//	}
	return 0;
}
