//
//  main.cpp
//  Ch1
//
//  Created by ChangKimMac on 12/16/18.
//  Copyright © 2018 ChangKim. All rights reserved.
//

#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];
    
    std::cout<<" What is your name : ";
    std::cin>>name;
    
    std::cout<<" What is the favorite language : ";
    std::cin>>lang;
    
    std::cout<<" My name is "<< name << std::endl;
    std::cout<<" My favorite lange is "<< lang <<std::endl;
    
    return 0;
}
