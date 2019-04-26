// lower_bound/upper_bound example
#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int myints[] = {10,10,20,20,30,30,50,40,70,60,80};
  vector<int> v(myints,myints+8);
  sort (v.begin(), v.end());

  int low = lower_bound (v.begin(), v.end(), 25)-v.begin();
  int up= upper_bound (v.begin(), v.end(), 25) - v.begin();

  cout << "lower_bound at position " << low << '\n';
  cout << "upper_bound at position " << up << '\n';

  return 0;
}
