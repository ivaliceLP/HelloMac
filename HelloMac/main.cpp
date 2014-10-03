//
//  main.cpp
//  HelloMac
//
//  Created by ivalice on 14-10-2.
//  Copyright (c) 2014年 iva. All rights reserved.
//
#include <iostream>
using namespace std;
int main()
{
    char input[56]="xyz,,,,,ab,de,fg,i,uu,t,rge,gerge,greh,fe,e,w,e,t";
    char *p;
    char *q;
    /**//*strtokplacesaNULLterminator
         infrontofthetoken,iffound*/
    p=strtok(input,",");
    if(p)
        printf("%s\n",p);
    
   
    /**//*AsecondcalltostrtokusingaNULL
         asthefirstparameterreturnsapointer
         tothecharacterfollowingthetoken*/
    p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);

    
    p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);
    //printf("hey");
    
        
    p=strtok(NULL,",");
    if(p)
        printf("hahaha\n");
    return 0;
    /*
    int array[10];
    array[0]=3;
    for (int i=1; i<10; i++) {
        array[i]=array[i-1]+5;
    }
    for (int i=9; i>=0; i--) {
        printf("%d\n",array[i]);
    }
    cout << "Hello Mac!" << endl;
    return 0;*/
}