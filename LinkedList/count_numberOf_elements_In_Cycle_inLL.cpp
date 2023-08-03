// https://practice.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// using slow and fast pointer

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                ListNode *temp = slow;
                temp = temp->next;
                int ans = 0;
                while (temp != slow)
                {
                    ans++;
                    temp = temp->next;
                }
                ans++;
                // cout<<"ans="<<ans<<endl;
                return ans;
            }
        }
        // ans=countNodes(slow->next,fast)
        return 0;
    }
};