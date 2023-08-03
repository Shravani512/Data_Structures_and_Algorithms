// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// kadane's algorithm is always used to find maximun sum of contigeous array elements in given array
// O(n)

class Solution{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long maxi=-1,sum=0;
        long long mini=INT_MIN;
        for(int i=0;i<n;i++)
        {
            //mini=min(mini,arr[i]);   
            if(arr[i]>mini) mini=arr[i]; 
            
            sum+=arr[i];
            maxi=max(maxi,sum);
            
            if(sum<0) sum=0;
        }
        if(maxi==-1) return mini;
        else return maxi;
    }
};