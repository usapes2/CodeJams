ListNode* deleteDuplicates(ListNode* head) {
    ListNode* b = head;
    ListNode* f = head;

    while (f != NULL) {
        cout << f->val << endl;

        while (f != NULL and f->val == b->val)
            f = f->next;

        b->next = f;

        if (f == NULL) {
            break;
        } else {
            b = f;

        }
    }

    return head;
}