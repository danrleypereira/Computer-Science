/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;
    
    
    struct ListNode* mergedList = list1;
    struct ListNode* tail = mergedList;
    int isNotFirst = 0;
    struct ListNode* currentNodeList1 = list1;
    struct ListNode* currentNodeList2 = list2;
    while(currentNodeList1 != NULL && currentNodeList2 != NULL){
        if(currentNodeList1->val <= currentNodeList2->val) {
            if(isNotFirst){
                tail->next = currentNodeList1;
                tail = tail->next;
            } else {
                tail = currentNodeList1; // [0]
                mergedList = tail;
                isNotFirst++;
            }
            currentNodeList1 = currentNodeList1->next;
        } else {
            if(isNotFirst){
                tail->next = currentNodeList2; //[1] == current
                tail = tail->next; // [1] = [2]
            } else {
                tail = currentNodeList2; // [0]
                mergedList = tail;
                isNotFirst++;
            }
            currentNodeList2 = currentNodeList2->next;
        }
    }
    
    while(currentNodeList1 != NULL){
        tail->next = currentNodeList1; //[2] == current
        tail = tail->next; // [1] = [2]
        currentNodeList1 = currentNodeList1->next;
    }
    
    while(currentNodeList2 != NULL){
        tail->next = currentNodeList2;
        tail = tail->next;
        currentNodeList2 = currentNodeList2->next;
    }
    
    // tail->next = NULL; no need to this, since last node from one list already have next = NULL

    return mergedList;
    
}