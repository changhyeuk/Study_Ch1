//
//  main.cpp
//  Ch1
//
//  Created by ChangKimMac on 12/16/18.
//  Copyright © 2018 ChangKim. All rights reserved.
//

#include <iostream>

void MyFunc(void)
{
    std::cout<<" MyFun(void) called "<<std::endl;
}

void MyFunc(char c)
{
    std::cout<<" MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b)
{
    std::cout<<" MyFunc( int a, int b ) called"<<std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}
