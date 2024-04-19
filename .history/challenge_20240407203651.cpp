#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

struct Roi {
    int id;
    float x1, y1, x2, y2;
};

void solve()
{
}


float computeIntersection(Roi a, Roi b) {
    float intersectArea = 0, intersectX = 0, intersectY = 9;
    if (a.x2 > b.x2) swap(a, b);
    if (a.x2 <= b.x1) return intersectArea;
    intersectX = a.x2 - 

}
int main()
{
    fast_cin();
    float realArea = 0;
    int n;
    cin >> n; 
    vector<Roi> rois(n);

    // Lambda function to print each Roi in the vector
    auto printRois = [](const vector<Roi> &rois)
    {
        for (const auto &roi : rois)
        {
            cout << "ID: " << roi.id
                 << ", x1: " << roi.x1 << ", y1: " << roi.y1
                 << ", x2: " << roi.x2 << ", y2: " << roi.y2 << endl;
        }
    };

    forn(i, n) cin >> rois[i].x1 >> rois[i].y1 >> rois[i].x2 >> rois[i].y2; 

    sort(all(rois), [](const Roi& a, const Roi& b){
        return a.x2 < b.x2; 
    });
    forn(i, n) rois[i].id = i;
    printRois(rois);

    cout << setprecision(2) << fixed << realArea << ln;
    return 0;
}