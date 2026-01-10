// Use two pointers : slow (tortoise 🐢 ) and fast (hare 🐇 ). The slow pointer moves one step at a time, while the fast pointer moves two steps at a time. If there's a cycle, the fast pointer will eventually meet the slow pointer inside the cycle. If there's no cycle, the fast pointer will reach the end of the list.

// Floyd’s Cycle-Finding Algorithm // fast slow approach // 2 pointers
// tortoise and the hare algorithm

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        bool flag = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};