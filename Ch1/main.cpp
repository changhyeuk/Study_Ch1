//
//  main.cpp
//  Ch1
//
//  Created by ChangKimMac on 12/16/18.
//  Copyright © 2018 ChangKim. All rights reserved.
//

#include <iostream>

namespace Hybrid {
    void HybFunc(void) {
        std::cout<<" So Simple function "<<std::endl;
        std::cout<<" In namespace Hybrid "<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}
