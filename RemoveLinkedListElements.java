/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if (head == null) return null;
        ListNode h = new ListNode(-8);
        h.next = head;
        
        ListNode p = h;
        
        while (p.next != null) {
            if (p.next.val == val) {
                p.next = p.next.next;
            }
            else p = p.next;
        }
        return h.next;
    }
}
