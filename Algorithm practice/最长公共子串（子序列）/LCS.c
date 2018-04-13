//
//  LCS.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/13.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "LCS.h"
#include "string.h"

void LCS_xulie(char data_1[],char data_2[])
{
    int Matrix[50][50]={0};
    
    int i=0,j=0;
    int ii=0,jj=0;
    
    unsigned long lenth_1=strlen(data_1);
    unsigned long lenth_2=strlen(data_2);
    
    for(i=0;i<lenth_1;i++)
    {
        ii=i+1;
        for(j=0;j<lenth_2;j++)
        {
            jj=j+1;
            
            if(data_1[i]==data_2[j])
            {
                Matrix[ii][jj]=Matrix[ii-1][jj-1]+1;
            }
            else
            {
                Matrix[ii][jj]=Matrix[ii-1][jj]>Matrix[ii][jj-1]?Matrix[ii-1][jj]:Matrix[ii][jj-1];
            }
        }
    }
    
    printf("%d\n",Matrix[ii][jj]);
    
    
}

void LCS_chuan(char data_1[],char data_2[])
{
    int Matrix[50][50]={0};
    
    int max=-99999;
    
    int i=0,j=0;
    int ii=0,jj=0;
    
    unsigned long lenth_1=strlen(data_1);
    unsigned long lenth_2=strlen(data_2);
    
    for(i=0;i<lenth_1;i++)
    {
        ii=i+1;
        for(j=0;j<lenth_2;j++)
        {
            jj=j+1;
            
            if(data_1[i]==data_2[j])
            {
                Matrix[ii][jj]=Matrix[ii-1][jj-1]+1;
            }
            else
            {
                Matrix[ii][jj]=0;
            }
            max<Matrix[ii][jj]?max=Matrix[ii][jj]:0;
        }
    }
    
    printf("%d\n",max);
}

void LCS(char data_1[],char data_2[],int form)
{
    if(form==0)
        LCS_xulie(data_1,data_2);
    else
        LCS_chuan(data_1, data_2);
    return;
}
