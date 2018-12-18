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
    int num;
    
    std::cout<<" What kind of GuGuDan you want make : ";
    std::cin>> num;
    
    for ( int i = 1; i <= 9 ; ++i )
    {
        std::cout<< num << " * "<< i <<" = "<< num * i << std::endl;
    }
    
    return 0;
    
}
