class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        DLLNode* curr=head;
        DLLNode* temp=NULL;
        
        while(curr!=NULL){
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            
            curr=curr->prev;
        }
        return temp->prev;
    }
};
