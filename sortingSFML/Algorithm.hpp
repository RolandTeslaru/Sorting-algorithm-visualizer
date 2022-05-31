//
//  Algorithm.hpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include "GlobalLibs.h"



class alg
{
private:
public:
    
    int size;
    
    void setsize(int getsize)
    {
        size = getsize;
    }
    void bubblesort(int *V);
    
    int selectionsort(int *V);
    
    string algtype();
};

class test
{
private:
public:
};


#endif /* Algorithm_hpp */
