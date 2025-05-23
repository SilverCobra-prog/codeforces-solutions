
using namespace std;
#include <bits/stdc++.h>

int main(void) {
  int N, M;
  string spotty[100], plain[100];

  cin >> N >> M;
  for (int i=0; i<N; i++) cin >> spotty[i];
  for (int i=0; i<N; i++) cin >> plain[i];
  
  int answer = 0;
  for (int j=0; j<M; j++) {
    bool found_cow[2][4] = {false};
    for (int i=0; i<N; i++) {
      if (spotty[i][j] == 'A') found_cow[0][0] = true;
      if (spotty[i][j] == 'C') found_cow[0][1] = true;
      if (spotty[i][j] == 'G') found_cow[0][2] = true;
      if (spotty[i][j] == 'T') found_cow[0][3] = true;
    }
    for (int i=0; i<N; i++) {
      if (plain[i][j] == 'A') found_cow[1][0] = true;
      if (plain[i][j] == 'C') found_cow[1][1] = true;
      if (plain[i][j] == 'G') found_cow[1][2] = true;
      if (plain[i][j] == 'T') found_cow[1][3] = true;
    }
    bool location_is_good = true;
    for (int i = 0; i < 4; ++i) {
      if (found_cow[0][i] && found_cow[1][i]) {
        location_is_good = false;
        break;
      }
    }
    if (location_is_good) answer++;
  }
  cout << answer << "\n";

  return 0;
}