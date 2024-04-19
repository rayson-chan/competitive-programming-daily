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
#include <cctype> // for char type control
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

string preprocess(string input)
{
    string res;
    ll opStartIdx;
    forn(i, input.length()) {
        res.push_back(input[i]);
        if (input[i] == '[' || input[i] == ']') {
            opStartIdx = i;
            while(++i < input.length() && input[i] == '[' || input[i] == ']') {}
            if (i == input.length() || i == opStartIdx + 1) {
                continue;
            } else {
                res.push_back(input[i - 1]);
            }

        }
    }
    return res;

}

void solve()
{
    string input;
    getline(cin, input);
    cout << input << ln;
    input = preprocess(input);
    cout << input << ln;

    deque<char> leftStack, rightStack;
    forn(i, input.length()) {
        char c = input[i];

        if (isdigit(c) || islower(c) || c == ' ')
        {
            leftStack.push_back(c);
        }
        else if (c == '[')
        {
            while (!leftStack.empty())
            {
                rightStack.push_front(leftStack.back());
                leftStack.pop_back();
            }
        }
        else if (c == ']')
        {
            while (!rightStack.empty())
            {
                leftStack.push_back(rightStack.front());
                rightStack.pop_front();
            }
        }
        else if (c == '<')
        {
            if (!leftStack.empty())
                leftStack.pop_back();
        }
    }

    // Move everything back to leftStack to print easily
    while (!rightStack.empty())
    {
        leftStack.push_back(rightStack.front());
        rightStack.pop_front();
    }

    for (auto c : leftStack)
    {
        cout << c;
    }
    cout << ln;
}
int main()
{
    fast_cin();
    ll t;
    string _t;
    getline(cin, _t);
    t = stoi(_t);
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}