//
//  leetcode_21.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_21.h"
#include<stdlib.h>




void create_list(NODE *head)
{
    NODE *tempPoint=head;
    char temp=65;
    while(temp!='\n')
    {
        tempPoint->next=(NODE*)malloc(sizeof(NODE));
        tempPoint=tempPoint->next;
        tempPoint->next=NULL;
        
        scanf("%d",&(tempPoint->data));
        temp=getchar();
    }
}

void output_list(NODE *head)
{
    NODE *tempPoint=head->next;
    while(tempPoint)
    {
        printf("%d ",tempPoint->data);
        tempPoint=tempPoint->next;
    }
    printf("\n");
}

void merge_list(NODE *head,NODE *list_1,NODE *list_2)
{
    NODE *tempPoint=NULL,*tempPoint_1=list_1->next,*tempPoint_2=list_2->next;
    
    head=(NODE*)malloc(sizeof(NODE));
    head->next=NULL;
    head->data=0;
    
    tempPoint=head;
    
    while(tempPoint_1&&tempPoint_2)
    {
        if(tempPoint_1->data<=tempPoint_2->data)
        {
            tempPoint->next=tempPoint_1;
            tempPoint=tempPoint->next;
            tempPoint_1=tempPoint_1->next;
        }
        else
        {
            tempPoint->next=tempPoint_2;
            tempPoint=tempPoint->next;
            tempPoint_2=tempPoint_2->next;
        }
    }

    if(tempPoint_1==NULL)
        tempPoint->next=tempPoint_2;
    else
        tempPoint->next=tempPoint_1;
    
}


