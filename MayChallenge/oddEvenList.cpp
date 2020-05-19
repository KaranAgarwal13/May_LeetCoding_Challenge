ListNode* oddEvenList(ListNode* head) {
	//if list is empty return empty
    if(!head)   return NULL;
    ListNode *ptr, *evenHead, *evenPtr;
    ptr = head;
	//to track list of even nodes
    evenHead = evenPtr = ptr->next;
	//if list has one element, return as is 
	if(!evenHead)	return head;
    while(true)
    {
        ptr->next = evenPtr->next;
        if(!ptr->next)   break;
        ptr = ptr->next;
        evenPtr->next = ptr->next;
        evenPtr = evenPtr->next;
        if(!evenPtr)    break;
    }
    ptr->next = evenHead;
    return head;
}
