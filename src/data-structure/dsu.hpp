
class unionfind {
   private:
   ll N;
   vector<ll> P;
   vector<ll> S;
   ll root(ll now) {
      if(now != P[now]) P[now] = root(P[now]);
      return P[now];
   }

   public:
   /*1-indexed*/
   unionfind(ll n) {
      N = n;
      P = vector<ll>(N + 1);
      for(ll i = 1; i <= N; i++) P[i] = i;
      S = vector<ll>(N + 1, 1);
   }
   /*a,bを連結する*/
   void merge(ll a, ll b) {
      a = root(a);
      b = root(b);
      if(S[a] <= S[b]) {
         P[b] = a;
         S[a] += S[b];
      } else {
         P[a] = b;
         S[b] += S[a];
      }
   }
   /*a,bの連結判定*/
   bool same(ll a, ll b) {
      a = root(a);
      b = root(b);
      return a == b;
   }
   /*a連結成分のsizeを返す*/
   ll size(ll a) { return S[root(a)]; }
   /*全ての連結成分を列挙*/
   vector<vector<ll>> groups(void) {
      map<ll, vector<ll>> m;
      vector<vector<ll>> ret;
      for(ll i = 1; i <= N; i++) m[root(i)].push_back(i);
      for(auto e : m) ret.push_back(e.second);
      return ret;
   }
};