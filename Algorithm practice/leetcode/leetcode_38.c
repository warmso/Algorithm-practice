//
//  leetcode_38.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_38.h"
#include "stdlib.h"

int judge(int data[],int location)
{
    int i=location;
    while(data[i+1]==data[i])
    {
        i++;
    }
    return i-location+1;
}
int jump(int data[],int location)
{
    int i=location;
    while (data[i+1]==data[i]) {
        i++;
    }
    return i;
}

char* countAndSay(int n) {
    int data_1[10000]={0};
    int data_2[10000]={0};
    char *result;
    int count_1=1,count_2=0;
    int i,j;
    int temp;
    data_1[0]=1;
    result=(char*)malloc(sizeof(char)*10000);
    n=n-1;
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)//data_1 actived
        {
            count_2=0;
            for(j=0;j<count_1;j++)
            {
                
                temp=judge(data_1,j);
                data_2[count_2]=temp;
                count_2++;
                data_2[count_2]=data_1[j];
                count_2++;
                j=jump(data_1, j);
            }
        }
        else
        {
            count_1=0;
            for(j=0;j<count_2;j++)
            {
                temp=judge(data_2,j);
                data_1[count_1]=temp;
                count_1++;
                data_1[count_1]=data_2[j];
                count_1++;
                j=jump(data_2, j);
            }
        }
    }
    if(n%2==0)
    {
        for(i=0;i<count_1;i++)
            result[i]=data_1[i]+'0';
        result[i]='\0';
    }
    else
    {
        for(i=0;i<count_2;i++)
            result[i]=data_2[i]+'0';
        result[i]='\0';
    }
    return result;
    
}
