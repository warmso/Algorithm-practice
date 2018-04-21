//
//  leetcode_122.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/21.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_122.h"

int maxProfit(int* prices, int pricesSize) {
    int i;
    int singinal=0;//meimai
    
    int money=0;
    
    for(i=0;i<pricesSize-1;i++)
    {
        if(singinal==0)
        {
            if(prices[i]<prices[i+1])
            {
                singinal=1;
                money-=prices[i];
            }
        }
        else
        {
            if(prices[i]>prices[i+1])
            {
                singinal=0;
                money+=prices[i];
            }
        }
    }
    if(singinal==1)
        money+=prices[i];
    return money;
}
