#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int a, b, c;
int arr[10000005];
long long ans;

int main(){
  scanf("%d %d %d", &a, &b, &c);

  // for(int i=1; i<=(a*b*c); i++){
  //     for(int j=i; j<=(a*b*c); j+=i){
  //         ++arr[j];
  //     }
  // }

  // for(int i=1; i<=a; i++){
  //   for(int j=1; j<=b; ++j){
  //     for(int k=1; k<=c; ++k){
  //       int tmp = i*j*k;
  //       ans += arr[tmp];
  //     }
  //   }
  // }
  printf("%lld\n", ans % 1073741824);
  return 0;
}