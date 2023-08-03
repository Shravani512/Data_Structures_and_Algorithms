// https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int cnt=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if((arr[i]+arr[j])>=arr[j] && (arr[i]+arr[j])<=arr[n-1]){
	                
	               // binary search
	                int sum=arr[i]+arr[j];
	                int start=j;
	                int end=n-1;
	                while(start<=end)
	                {
	                    int m=start+(end-start)/2;
	                    if(sum==arr[m]){
	                        cnt++;
	                        break;
	                    }
	                    if(sum<arr[m])end=m-1;
	                    else start=m+1;
	                }
	               //for(int k=j+1;k<n;k++)
	               //{
	               //    if(sum==arr[k]){
	               //        cnt++;
	               //        break;
	               //    }
	               //}
	            }
	            else break;
	            }
	    }
	    return cnt;
	}
};