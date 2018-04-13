//
//  main.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/13.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include <stdio.h>
#include "LCS.h"


int main(int argc, const char * argv[]) {
    
    char data_1[50];
    char data_2[50];
    
    scanf("%s",data_1);
    scanf("%s",data_2);
    
    LCS(data_1,data_2,1);
    
    return 0;
}
