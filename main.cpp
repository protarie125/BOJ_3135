#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll a, b;
ll n;
vl def;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a >> b;
  cin >> n;
  def = vl(n);
  for (auto&& x : def) {
    cin >> x;
  }

  auto ans = abs(a - b);
  for (const auto& x : def) {
    ans = min(ans, abs(x - b) + 1);
  }

  cout << ans;

  return 0;
}