//
//  main.cpp
//  Ch1
//
//  Created by ChangKimMac on 12/16/18.
//  Copyright © 2018 ChangKim. All rights reserved.
//

#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<" The function was defined by BestComImpl "<<std::endl;
    }
}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<" The function was defiened by ProgComImpl "<<std::endl;
    }
}


int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}
