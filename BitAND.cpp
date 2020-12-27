//Find number of pairs having bitwise AND greater than k

#include <bits/stdc++.h>
    using namespace std;
      
    long long dp[(1 << 20) + 1];
    int freq[(1 << 20) + 1];
    const int MAX = (1 << 20) - 1;
     
    void solve() {
    	int n;
        cin >> n;
        
    	int ar[n];
    	memset(freq, 0, sizeof freq);
     
    	for(auto &num : ar) {
    		cin >> num;
    		++freq[num];
    	}
    	
    	int k;
    	cin>>k;
     
     
        long long res = 0;
        for(int mask = 0; mask < (1 << 20); ++mask)
			dp[mask] = freq[mask];
 
		for(int bit = 0; bit <= 20; ++bit) {
			for(int	 mask = 0; mask < (1 << 20); ++mask) {
			    int flag=mask & (1 << bit);
				if(flag > k)
					dp[mask] += dp[mask ^ (1 << bit)];
			}		
		}
        
    	for(int i = 0; i < n; ++i)
        	res += dp[MAX ^ ar[i]];
        		
    	cout << res << endl;
     
    }
     
    int main() {
        solve();
    }
     
