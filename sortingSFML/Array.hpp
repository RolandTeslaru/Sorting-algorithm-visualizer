//
//  Array.hpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//

#ifndef Array_hpp
#define Array_hpp

#include "GlobalLibs.h"

class arr
{
private:
public:
    int size;

    void setsize(int getsize)
    {
        size = getsize;
    }
    void generate_arr(int *V , string type );

    void shuffle_arr(int *V);

    void show_arr(int *V);

};


#endif /* Array_hpp */
