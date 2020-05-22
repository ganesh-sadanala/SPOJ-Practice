#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define N 2e5 + 5
#define f first
#define s second
#define all(x) x.begin(), x.end()
// #define int long long int
#define forn(i, n) for (int i = 0; i < n; i++)
#define fore(i, l, r) for (int i = l; i < r; i++)
#define sz(a) (int)((a).size())
#define ll long long
#define ar array
#define size (int)2e5 + 5

long a[size];
int t, c, st;
bool f(long x)
{
  int temp = 1;
  long pre = a[0];
  fore(i, 1, st)
  {
    if (a[i] - pre >= x)
    {
      temp++;
      if (temp == c)
        return true;

      pre = a[i];
    }
  }
  return false;
}
void solve()
{
  long l = 0, r = a[st - 1];
  long ans = 0;
  while (l <= r)
  {
    long mid = l + (r - l) / 2;
    if (f(mid))
    {
      ans = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
  cout << ans << "\n";
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while (t-- > 0)
  {
    cin >> st >> c;
    forn(i, st)
            cin >>
        a[i];
  }
  sort(a, a + st);
  solve();
  return 0;
}
