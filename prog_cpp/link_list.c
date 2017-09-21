#include <stdio.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

int ListLength(struct ListNode *head) {
    struct ListNode *current = head;
    int count = 0;

    while (current != NULL) {
        count ++;
        current = current->next;
    }
    return count;
}

int main() {
    int length = 0;

    length = ListLength(head);

    return 0;
}
