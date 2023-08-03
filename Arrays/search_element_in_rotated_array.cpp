
// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// if not understoot see anuj bhaiya video on this topic

class Solution{
    public:
    int search(int A[], int low, int high, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //basically the logic in 1st find mid, their can be two cases the first part i.e from low to mid it will be sorted or else it will be not sorted
        //out of two parts one part will always be sorted ie (low to mid) or(mid to high)

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(A[mid]==key)return mid;

            //if block is for- if(low to mid) is sorted 
            //ans else if for- if(low to mid) is not sorted that means mid to high is sorted
            // will always check our eelement in sorted part

            if(A[low]<=A[mid])//check if low to mid is sorted or not 
            {
                if(key>=A[low]&& key<=A[mid])
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{  //mid to high is sorted
                if(key>=A[mid]&&key<=A[high])
                {
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};