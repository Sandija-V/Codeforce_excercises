#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> manager;
vector<int> superior[2001];

/* A recursive function DFS (Depth-First Search) for each manager node in the manager vector. The DFS function takes an employee node m and returns the maximum size of the group that the employee belongs to. The function does this by iterating over all of the direct subordinates of m, recursively calling DFS on each subordinate, and taking the maximum of the returned group sizes. The final group size for m is then the maximum returned group size plus one, since m itself is included in the group.*/
int DFS(int m) {
   int group = 1;
   for (int i = 0; i < superior[m].size(); ++i) {
      group = max(group, DFS(superior[m][i]) + 1);
   }
   return group;
}

int main() {
   cin >> n;
   for (int i = 1; i <= n; ++i) {
      int p;
      cin >> p;
      if (p == -1) {
         manager.push_back(i);
      }
      else {
         superior[p].push_back(i);
      }
   }
   int groupMax = 1;
   for (int i = 0; i < manager.size(); ++i) {
      groupMax = max(groupMax, DFS(manager[i]));
   }
   cout << groupMax << endl;
   return 0;
}
