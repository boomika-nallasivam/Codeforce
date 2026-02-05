#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> stars;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == '*'){
                stars.push_back({i, j});
            }
        }
    }

    int r, c;

    // find missing row
    if(stars[0].first == stars[1].first) r = stars[2].first;
    else if(stars[0].first == stars[2].first) r = stars[1].first;
    else r = stars[0].first;

    // find missing column
    if(stars[0].second == stars[1].second) c = stars[2].second;
    else if(stars[0].second == stars[2].second) c = stars[1].second;
    else c = stars[0].second;

    cout << r+1 << " " << c+1;
}
