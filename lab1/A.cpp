#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define int long long
void solve(){
    int n , k;
    cin >> n >> k;
    vector<int>a(n);
    vector<int>h(n);
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n;i++) cin >> h[i];
    int i = 0, j = 1;
    int s = a[0];
    int maxi = 0;
    while(j<n){
        if(h[i] % h[j] == 0){
            s+=a[h];
        }
        if()

    }


}






signed  main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}
