#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vi  vector<int>
#define vll vector<long long int>

int reversort(vi L){
  int cost = 0;

  int len = L.size();

  for(int i = 0; i < len - 1; i++){
    
    // Find the minimum element in the "rest of the array":
    int m = *min_element(L.begin() + i, L.end());

    // Find the index of the minimum element found above:
    auto idx = find(L.begin(), L.end(), m);

    // Execute the reversal:
    reverse(L.begin() + i, idx + 1);

    // Track the cost:
    cost += distance(L.begin(),idx) - i + 1; 

  }
  return cost; 
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r", stdin);
        freopen("out.txt","w", stdout);
    #endif
  
    std::ios::sync_with_stdio(false);  // is used to unsynchronize C++ 
                                       //standard streams with C standard streams, 
                                       //which can improve the performance of input/output operations.

    int T;
    cin >> T;

    for(int c = 1; c < T+1; c++){

        int n;
        cin >> n;

        vi L;

        for(int j = 0; j < n; j++){
          int e;
          cin >> e;
          L.push_back(e);
        }

        cout << "Case #" << c << ": " << reversort(L) << endl;

    }
}