/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *P1 = l1, *P2 = l2;
        ListNode *head = nullptr, *current = nullptr;
        int carry = 0;

        while (P1 != nullptr && P2 != nullptr) {
            int sum = P1->val + P2->val + carry;
            carry = sum / 10;
            int digit = sum % 10;

            if (head == nullptr) {
                head = new ListNode(digit);
                current = head;
            } else {
                current->next = new ListNode(digit);
                current = current->next;
            }

            P1 = P1->next;
            P2 = P2->next;
        }

        P1 = (P1 != nullptr) ? P1 : P2;

        while (P1 != nullptr) {
            int sum = P1->val + carry;
            carry = sum / 10;
            int digit = sum % 10;

            current->next = new ListNode(digit);
            current = current->next;

            P1 = P1->next;
        }

        if (carry) {
            current->next = new ListNode(carry);
        }

        return head;
    }
};
