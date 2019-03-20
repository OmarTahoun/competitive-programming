
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, k, oddIterations;
    cout<<"1";
    cin >> n >> k;
    vector<long long int> newArrangement(10000000000000);
    cout<<"2";
    if (n%2 == 0)
    {
        cout<<"3";
        oddIterations = n/2;
    }
    else
    {
        cout<<"4";
        oddIterations = (n/2)+1;
    }
    
    for (int i=1, j=0; i<n+1; i=i+2, j++) {
        cout<<"5";
        newArrangement[j] = i;
    }
    for (int i=2, j=oddIterations; i<n+1; i=i+2, j++) {
        cout<<"6";
        newArrangement[j] = i;
    }
    cout << newArrangement[k-1] << endl;
    return 0;
}
