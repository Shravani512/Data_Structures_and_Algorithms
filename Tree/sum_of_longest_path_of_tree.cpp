// https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

class Solution
{
public:
    void maximumxum(Node* root,int &maxsum,int sum,int len,int& maxlen)
    {
        
        //as we wanted to find length then will update value when we reach to the leaf node
        if(root==NULL){
            if(len>maxlen)
            {
                maxsum=sum;
                maxlen=len;
            }
            else if(len==maxlen)
            {
                maxsum=max(sum,maxsum);
            }
            return;
        }
        
        sum+=root->data;
        maximumxum(root->left,maxsum,sum,len+1,maxlen);
        maximumxum(root->right,maxsum,sum,len+1,maxlen);
        // maxi=maxi,sum);
    }
    int sumOfLongRootToLeafPath(Node *root)
    { 
        int sum=0;
        int maxsum=0;
       
        int len=0;
        int maxlen=0;
        
        maximumxum(root,maxsum,sum,len,maxlen); 
        // cout<<"length"<<maxlen<<endl;
        return maxsum;
        
    }
};