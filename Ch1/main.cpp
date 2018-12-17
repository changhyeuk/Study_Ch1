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
    int val1;
    std::cout<<" The first number : ";
    std::cin>>val1;
    
    int val2;
    std::cout<<" The second number : ";
    std::cin>>val2;
    
    int result = val1 + val2;
    std::cout<<" The Sum will be : "<< result <<std::endl;
    return 0;

}
