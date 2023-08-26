#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define sync                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define files                        \
    freopen("input.in", "r", stdin); \
    freopen("output.out", "w", stdout);

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll MOD = 1e9 + 7;
const int MXN = 2e5 + 5;

#define no cout << "No\n"
#define NO cout << "NO\n"

#define yes cout << "Yes\n"
#define YES cout << "YES\n"

int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1, -1, 1, -1, 0, 0, -1, 1};

map<string, int> rel;
map<string, int> id;
map<int, string> name;

string f, s;
vector<vector<int>> graph(100);
vector<int> par(100), dis(100), level(100), in(100), out(100), an(100);
int timer = 0;

void gen(int node, int curpar = -1)
{
    in[node] = timer++;
    for (int child : graph[node])
    {
        if (child == curpar)
            continue;

        an[child] = node;
        level[child] = level[node] + 1;
        gen(child, node);
    }
    out[node] = timer++;
}

void dfs(int node)
{
    for (int child : graph[node])
    {
        if (child == par[node])
            continue;

        par[child] = node;
        dis[child] = dis[node] + 1;
        dfs(child);
    }
}

void sol(int tc)
{
    rel["george + mum"] = 1;
    rel["spencer + kydd"] = 1;
    rel["elizabeth + philip"] = 1;
    rel["diana + charles"] = 1;
    rel["anne + mark"] = 1;
    rel["andrew + sarah"] = 1;
    rel["edward + sophie"] = 1;

    cin >> f >> s;
    cout << "\n";
    if (f == s)
    {
        cout << "They are the same person\n";
        return;
    }

    string x = f + " + " + s;
    string y = s + " + " + f;
    if (rel[x] || rel[y])
    {
        cout << f << " and " << s << " are a couple\n";
        return;
    }

    id["george"] = 1;
    id["mum"] = 1;
    name[1] = "george + mum";

    id["spencer"] = 2;
    id["kydd"] = 2;
    name[2] = "spencer + kydd";

    id["elizabeth"] = 3;
    id["philip"] = 3;
    name[3] = "elizabeth + philip";

    id["margaret"] = 4;
    name[4] = "margaret";

    id["diana"] = 5;
    id["charles"] = 5;
    name[5] = "diana + charles";

    id["anne"] = 6;
    id["mark"] = 6;
    name[6] = "anne + mark";

    id["andrew"] = 7;
    id["sarah"] = 7;
    name[7] = "andrew + sarah";

    id["edward"] = 8;
    id["sophie"] = 8;
    name[8] = "edward + sophie";

    id["william"] = 9;
    name[9] = "william";
    id["harry"] = 10;
    name[10] = "harry";

    id["peter"] = 11;
    name[11] = "peter";
    id["zara"] = 12;
    name[12] = "zara";

    id["beatrice"] = 13;
    name[13] = "beatrice";
    id["eugenie"] = 14;
    name[14] = "eugenie";

    id["louise"] = 15;
    name[15] = "louise";
    id["james"] = 16;
    name[16] = "james";

    graph[1].push_back(3);
    // graph[3].push_back(1);
    graph[1].push_back(4);
    // graph[4].push_back(1);

    graph[2].push_back(5);
    // graph[5].push_back(2);

    graph[3].push_back(5);
    graph[3].push_back(6);
    graph[3].push_back(7);
    graph[3].push_back(8);

    // graph[5].push_back(3);
    // graph[6].push_back(3);
    // graph[7].push_back(3);
    // graph[8].push_back(3);

    graph[5].push_back(9);
    graph[5].push_back(10);

    // graph[9].push_back(5);
    // graph[10].push_back(5);

    graph[6].push_back(11);
    graph[6].push_back(12);

    // graph[11].push_back(6);
    // graph[12].push_back(6);

    graph[7].push_back(13);
    graph[7].push_back(14);

    // graph[13].push_back(7);
    // graph[14].push_back(7);

    graph[8].push_back(15);
    graph[8].push_back(16);

    // graph[15].push_back(8);
    // graph[15].push_back(8);

    for (int ii = 1; ii <= 16; ++ii)
        level[ii] = MXN;
    for (int ii = 1; ii <= 16; ++ii)
        par[ii] = -1;

    level[1] = 0;
    level[2] = 100;
    in[2] = -1;
    out[2] = -1;

    gen(1);

    dfs(id[f]);

    int nxt = id[s];

    if (level[id[f]] == level[id[s]])
    {
        if (id[f] == 2 || id[s] == 2 || an[id[f]] != an[id[s]])
        {
            cout << f << " and " << s << " are not related\n";
            return;
        }

        cout << f << " and " << s << " are siblings\n";
        return;
    }
    if (level[id[f]] > level[id[s]])
        swap(f, s);

    if (!(in[id[f]] <= in[id[s]] && out[id[f]] >= out[id[s]]))
    {
        cout << f << " and " << s << " are not related\n";
        return;
    }

    vector<int> anc;
    int cur = id[s];
    while (cur != id[f] && cur != -1)
    {
        anc.push_back(cur);
        cur = par[cur];
    }

    anc.push_back(cur);
    reverse(all(anc));

    for (int ii = 0; ii < sz(anc); ++ii)
    {
        cout << ii + 1 << ": " << name[anc[ii]] << "\n";
    }
    cout << "\n";
    cout << "so " << s << " is the " << sz(anc) - 1 << " no descendant of " << f << "\n";
    cout << "\n";
}

int main()
{
    sync;
    int tc = 1;
    // cin >> tc;
    for (int ii = 1; ii <= tc; ++ii)
        sol(ii);
}
