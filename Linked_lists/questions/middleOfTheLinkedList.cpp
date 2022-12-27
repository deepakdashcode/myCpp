// Algorithm is ultra simple, make a pointer that jumps two steps (fast) if possible and make a pointer that jumps only one step(slow)
// so that when the fast pointer reaches the end of the list then the node that the slow pointer points is the required node



// #include <bits/stdc++.h> 

// /****************************************************************

//     Following is the class structure of the Node class:

//        class Node 
//         { 
//         public:
//             int data;
//             Node *next;
//             Node(int data) 
//             {
//                this->data = data;
//               this->next = NULL;
//             }
//         };

// *****************************************************************/

// Node *findMiddle(Node *head) {
//     // no element
//     if(!head)
//     {
//         return NULL;
//     }
//     // one elemnt
//     if(!head->next)
//     {
//         return NULL;
//     }
//     // two elements
    
//     Node* fast = head-> next;
//     Node* slow = head;
    
//     while(fast)
//     {
//         fast = fast-> next;
//         if(fast)
//         {
//             fast = fast -> next;
//         }
//         slow = slow-> next;
//     }
    
//     return slow;
// }
