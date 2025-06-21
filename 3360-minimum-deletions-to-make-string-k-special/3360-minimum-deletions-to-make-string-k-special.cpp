# define ll int
class Solution {
public:
    int minimumDeletions(string word, int k) {
    vector<ll>v;
        
    vector<ll>cnt(26,0);
    for(auto i:word) cnt[i-'a']++;
    
    for(auto i:cnt) if(i>0) {
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    ll n=v.size();
    vector<ll>suf(n+2,0);
    suf[n]=v[n-1];
    for(ll i=n-2;i>=0;i--){
        suf[i+1]=suf[i+2]+v[i];
    }
    ll minm=1e9;
    ll s=0;
    for(ll i=0;i<n;i++){
        ll p=v[i]+k;
        ll r=upper_bound(v.begin(),v.end(),p)-v.begin();
        minm=min(minm,s+suf[r+1]-(n-r)*p);
        s+=v[i];
    }
    return minm;
    }
};