// https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution
{
    ListNode *ans = new ListNode();
    ListNode *ret = ans;

public: 
    void insertAtLast(int v)
    {
        ListNode *temp = new ListNode();
        temp->val = v;
        temp->next = nullptr;
        // if(ans==nullptr)ans=temp;
        // else{
        //     while(!ans)
        //     {
        //         ans=ans->next;
        //     }
        //     ans->next=temp;
        // }
        ans->next = temp;
        ans = ans->next;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                insertAtLast(list1->val);
                list1 = list1->next;
            }
            else
            {
                insertAtLast(list2->val);
                list2 = list2->next;
            }
        }
        while (list1 != NULL)
        {
            insertAtLast(list1->val);
            list1 = list1->next;
        }
        while (list2 != NULL)
        {
            insertAtLast(list2->val);
            list2 = list2->next;
        }
        return ret->next;
    }
};