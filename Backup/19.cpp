class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;

        for(int i = 0; i < n; ++i)
        {
            first = first->next;
        }
        
         if (first == nullptr)
            return head->next;
        
        while(first->next)
        {
            first = first->next;
            second = second->next;
        }
        
        second->next = second->next->next;
        
        return head;
    }
};
