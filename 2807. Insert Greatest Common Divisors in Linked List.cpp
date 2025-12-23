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
private:
    int gcd(int a, int b) {
        if (a % b == 0)
            return b;
        return gcd(b, a % b);
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* now = head;
        ListNode* now_next = now->next;
        while (now->next != NULL) {
            int g=gcd(now->val,now->next->val);
            now->next=new ListNode(g,now_next);
            now=now_next;
            now_next = now->next;
        }
        return head;
    }
};
/*
題目:
給一個LinkList，要求在兩個node之間插入兩個node的最大公因數

解題:
如題要求，先使用now記錄head的位址，now_next記錄now的下一個節點(node)
如果node的下一個不是NULL就不斷做
用整數g當兩個node的val做gcd後的結果
為now的下一個node新增node 值是g，下一個則是now_next做Link
將now變更為前次連結的now_next
now_next變更為已更改後的now的下一個節點(node)

需求:
要會GCD(最大公因數)

*/