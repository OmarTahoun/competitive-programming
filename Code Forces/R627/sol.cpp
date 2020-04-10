#include<bits/stdc++.h> 
using namespace std; 
  
int n,dp[5001][5001]; 
int arr[5001];

int solve(int i,int j){ 
    if(i>=n||j<0)
    	if(abs(i-j) >= 3)
    		return 1;
    	return 0;
      
    if(dp[i][j]!=-1) return dp[i][j]; 
    
    if(abs(i-j)==1){ 
        if(arr[i]==arr[j])
        	return dp[i][j] = 3; 
        else
        	return dp[i][j] = 2; 
    } 
      
    if(i==j) 
    	return dp[1][j] = 1; 
      
    else if (arr[i] == arr[j]) 
		return dp[i][j] = solve(i+1, j) +  solve(i, j-1) + 1; 
      
	else
		return dp[i][j] = solve(i+1, j) + solve(i, j-1) - solve(i+1, j-1);
      
} 
  
int main(){ 

    memset(dp,-1,sizeof dp);   
    cin>>n;
    for (int i = 0; i < n; ++i)
    	cin>>arr[i];

    int res = solve(0, n-1);
    cout<<res<<endl;
          
    return 0;
}
    