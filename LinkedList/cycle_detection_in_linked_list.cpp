// https://leetcode.com/problems/linked-list-cycle/description/
// using slow and fast pointer method slow pointer moves by 1 and fast pointer moves by 2   
// this method is called as flyd's algorithm for cycle deetction
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            slow = slow->next;
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            if (fast == slow)
                return true;
        }
        return false;
    }
};

// solution 2 using visited map
if(head==NULL) return false;
    map<Node*, int> visited;

    while(head!=NULL)
    {
        if(visited[head]==1) return true;
        visited[head]=1;
        head=head->next;
    }
    return false;