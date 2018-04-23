
//
//  leetcode_234.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_234.h"
#include "stdbool.h"

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* new_head=NULL;
    struct ListNode* p=head;
    struct ListNode* temp;
    
    while(p)
    {
        temp=p->next;
        p->next=new_head;
        new_head=p;
        p=temp;
    }
    return new_head;
}

//bool isPalindrome(struct ListNode* head) {
//
//    struct ListNode* p_fast=head;
//    struct ListNode* p_slow=head;
//    struct ListNode* p_temp=NULL;
//    struct ListNode* p_new=NULL;
//
//    if(head==NULL||head->next==NULL)
//        return true;
//
//
//    while(p_fast->next)
//    {
//
//        p_fast=p_fast->next;
//        if(p_fast->next)
//        {
//            (p_fast=p_fast->next);
//        }
//        else
//            break;
//        p_slow=p_slow->next;
//    }
//    p_temp=p_slow->next;
//    p_slow->next=NULL;
//
//    p_slow=p_temp;
//
//    p_new=reverseList(p_slow);
//
//    p_fast=head;
//    p_slow=p_new;
//    while(p_fast&&p_slow)
//    {
//        if(p_fast->val==p_slow->val)
//        {
//            p_fast=p_fast->next;
//            p_slow=p_slow->next;
//        }
//        else
//            return false;
//    }
//    return true;
//
//}

