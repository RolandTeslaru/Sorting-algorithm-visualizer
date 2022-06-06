//
//  Array.cpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//

#include "Array.hpp"

void arr::generate_arr(int *V, string type)
{
    if(type == "random")
    {
            srand(time(NULL));
            for(int i = 1 ; i <= size ; i ++ )
            {
               V[i] = (rand() % 100);
            }
    }
    else if(type == "normal")
    {
        for(int i = 1 ; i <= size ; i ++)
        {
            V[i] = i;
            cout << V[i] << " ";
        }
    }
    else if(type == "manual")
    {
        for(int i = 1 ; i <= size ; i ++)
        {
            cin >> V[i] ;
        }
    }
}

void arr::shuffle_arr(int *V)
{
    srand(time(NULL));
    for(int i = 1 ; i <= size ; i ++)
    {
        swap(V[i] , V[rand() % i + 1]);
    }
}

void arr::show_arr(int *V)
{
    for(int i = 1 ; i<= size ; i++)
    {
        cout << V[i] << " ";
    }
}
