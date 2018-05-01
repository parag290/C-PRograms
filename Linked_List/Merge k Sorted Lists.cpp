/*
Leetcode - Problem 23

Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
*/

ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>store;
        vector<int>::iterator it;
        ListNode* res = NULL;
        ListNode* tail;
        int count = 0;
        
        if(lists.size()==0)
            return res;
            
        for(int i =0; i<lists.size();i++){
            if(lists[i] == NULL){
                store.push_back(32000);
            }
            else
                store.push_back(lists[i]->val);
        }
        
        while(1){
            it = std::min_element(store.begin(), store.end());
                        
            if(*it == 32000){
                break;
            }
            
            ListNode* temp = new ListNode(*it);
            if(count == 0){
                res = temp;
                count++;
                tail = res;
            }
            else{
                tail->next = temp;
                tail = tail->next;
            }
                        
            lists[(it-store.begin())] = lists[(it-store.begin())]->next; 
            if(lists[it-store.begin()] == NULL){
                store[it-store.begin()] = 32000;    
            }
            else{
                store[it-store.begin()] = lists[it-store.begin()]->val;    
            }
        }
        
        return res;      
    }
};
