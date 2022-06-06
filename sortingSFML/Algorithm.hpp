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
    
    string algtype;
    
    void setsize(int getsize)
    {
        size = getsize;
    }
    int bubblesort(int *V);
    
    int selectionsort(int *V);
    
    int insertionsort(int *V);
    
    void setalg(string type)
    {
        algtype = type;
    }
};

class test
{
private:
public:
};


#endif /* Algorithm_hpp */
