//
//  leetcode_125.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_125.h"
#include "string.h"
#include "stdbool.h"

#define bool _Bool

bool isPalindrome(char* s)
{
    char new[100000]={0};
    int k,i=0,j,count,count_new=0;
    count=(int)strlen(s);
    if(count==0||count==1)
        return true;
    
    
    for(k=0;k<count;k++)
    {
        if(s[k]>='A'&&s[k]<='Z')
        {
            new[count_new]=s[k]+32;
            count_new++;
            continue;
        }
        if((s[k]>='a'&&s[k]<='z')||(s[k]>='0'&&s[k]<='9'))
        {
            new[count_new]=s[k];
            count_new++;
            continue;
        }
    }
    i=0;j=count_new-1;
    while(i<=j)
    {
        if(new[i]==new[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
