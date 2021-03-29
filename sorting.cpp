#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct freq
{
    int n;
    int index;
    int count;
};

bool compare(freq, freq);

int main()
{
    int n, m, x;
    cin >> n >> m;
    vector<freq> v;
    map<int, pair<int, int>> b;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        map<int, pair<int, int>>::iterator it = b.find(x);
        if (it == b.end())
        {
            b[x] = make_pair(i, 1);
        }
        else
        {
            b[x].second++;
        }
    }

    for (map<int, pair<int, int>>::iterator it = b.begin(); it != b.end(); it++)
    {
        freq temp_freq;
        temp_freq.n = it->first;
        temp_freq.index = it->second.first;
        temp_freq.count = it->second.second;
        v.push_back(temp_freq);
    }

    sort(v.begin(), v.end(), compare);

    for (vector<freq>::iterator it = v.begin(); it != v.end(); it++)
    {
        for (int i = 0; i < it->count; i++)
        {
            cout << it->n << " ";
        }
    }
    return 0;
}
bool compare(freq a, freq b)
{
    if (a.count == b.count)
    {
        return a.index < b.index;
    }
    return a.count > b.count;
}