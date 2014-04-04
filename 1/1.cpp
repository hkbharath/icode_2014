#include <bits/stdc++.h>
using namespace std;

const int sz = 100;

long long team[sz];
long long treasure[sz];
int lt[sz];
int N, M, K;
bool v[sz];

bool validPath(int teamId, int trId, long long timeLimit) {
    return treasure[trId]-team[teamId] <= timeLimit;
}

bool dfs(int u, long long timeLimit) {
    if(u == -1)
        return true;
    if(v[u])
        return false;
    v[u] = true;

    for(int i = 0; i < (int)M; ++i) {
        int id = lt[i];
        if(validPath(u, i, timeLimit) && dfs(id, timeLimit)) {
            lt[i] = u;
            return true;
        }
    }
    return false;
}

int matching(long long tm) {
    memset(lt, -1, sizeof(lt));

    int ret = 0;
    for(int i = 0; i < (int)N; ++i) {
        memset(v, 0, sizeof(v));
        if(dfs(i, tm))
            ret++;
    }
    return ret;
}

long long binarySearch(long long l = 0, long long r = 1e9) {
    if(l == r)
        return l;
    long long mid = (l+r)/2;
    int match = matching(mid);
    return match >= K ? binarySearch(l, mid) : binarySearch(mid+1, r);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		cin >> N >> M >> K;
		assert(1 <= N); assert(N <= sz);
		assert(1 <= M); assert(M <= sz);
		assert(1 <= K); assert(K <= min(N, M));

		for(int i = 0; i < (int)N; ++i) {
		    cin >> team[i];
		}
		for(int i = 0; i < (int)M; ++i) {
		    cin >> treasure[i];
		}

		cout << binarySearch() << endl;
	}
    return 0;
}

