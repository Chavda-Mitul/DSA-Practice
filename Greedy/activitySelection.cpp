#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

static bool mySort(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int activitySelection(vector<int> start, vector<int> end, int n)
{
    int ans = 1;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back({start[i], end[i]});
    }

    sort(v.begin(), v.end(), mySort);

    int prev = 0;

    for (int curr = 1; curr < n; curr++)
    {
        if (v[curr].first > v[prev].second)
        {
            ans++;
            cout << " curr " << curr << endl;
            cout << " prev " << prev << endl;
            prev = curr;
        }
    }

    return ans;
}
int main()
{

    ll test = 1;
    int n = 4;
    vector<int> start = {1, 2, 5, 1, 6, 2};
    vector<int> end = {10, 4, 8, 5, 6, 10};
    // cin>>test;
    cout << activitySelection(start, end, n);

    return 0;
}
