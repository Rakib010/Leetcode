
// 1st linked list copy (insert at tail)
// reverse the copy list
// compare between original list vs reverse list

// T.C =

class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newnode = new ListNode(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void reverse(ListNode *&head, ListNode *tmp)
    {
        if (tmp->next == NULL)
        {
            head = tmp;
            return;
        }
        reverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;

        // insert loop
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert_tail(newhead, newtail, tmp->val);
            {
                tmp = tmp->next;
            }
        }
        // reverse fn call
        reverse(newhead, newhead);

        // compare 2 list
        tmp = head;
        ListNode *tmp2 = newhead;
        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};

// using vector
bool isPalindrome(ListNode *head)
{
    vector<int> v;
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    vector<int> v2;
    v2 = v;
    reverse(v2.begin(), v2.end());
    if (v == v2)
        return true;
    else
        return false
}
