#include <iostream>
using namespace std;
int main()
{
  int n,space = 1;
  cin>>n;
  space = n - 1;

  for (int k = 0; k<n; k++)
  {
    for (int c = 0; c<space; c++)
      cout<<"*";

    space--;

    for (int c = 0; c< 2*k-1; c++)
      cout<<"D";

    cout<<"\n";
  }

  space = 1;

  // for (int k = 1; k<= n - 1; k++)
  // {
  //   for (int c = 1; c<= space; c++)
  //     cout<<"*";

  //   space++;

  //   for (int c = 1 ; c<= 2*(n-k)-1; c++)
  //     cout<<"D";

  //   cout<<"\n";
  // }
  return 0;
}