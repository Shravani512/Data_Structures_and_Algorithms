
// https://www.codingninjas.com/studio/problems/total-unique-paths_1081470?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
#include <bits/stdc++.h> 

int F(int row,int col,vector<vector<int>>&dp)
{
	if(row==0 && col==0)return 1;
	if(row<0 || col<0) return 0;

	if(dp[row][col]!=-1)return dp[row][col];
	int up=F(row-1,col,dp);
	int left=F(row,col-1,dp);

	return dp[row][col]=up+left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

	return F(m-1,n-1,dp);
}