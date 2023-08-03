// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution{
public:
void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	vector<int> temp;
    	int j=n-1;
    	int i=0;
    	while(i<j)
    	{
    	    temp.push_back(arr[j]);
    	    j--;
    	    temp.push_back(arr[i]);
    	    i++;
    	}
    	if(i==j)temp.push_back(arr[i]);
    	
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=temp[i];
    	}
    	 
    }
};