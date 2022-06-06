//
//  Algorithm.cpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//
#include "Algorithm.hpp"
#include "Render.hpp"

Time timer;
Clock clock1;

sf::Time t1 ;
sf::Time t2 ;

int alg::insertionsort(int *V)
{
    bool modified = false;
    for(int i = 1 ; i <= size ; i ++)
    {
        int p = i;
        while(p > 0 && V[p] < V[p-1])
        {
            swap(V[p] , V[p-1]);
            p --;
            modified = true;
        }
        if(modified)
            return 0;
    }
    return 0;
}

int alg::bubblesort(int *V)
{
    cout << " HELLO ? " << endl;
    bool modified = false;
    bool sorted = true;
    do
    {
        sorted = true;
        for(int i = 1 ;i<= size ;i++)
        {
            if(V[i] > V[i+1])
            {
                swap(V[i] , V[i+1]);
                sorted = false;
//                draw(V);
//                exportArray(V, size);
                modified = true;
            }
        }
        if(modified)
            return 0;
    }while(!sorted);
    
    return 0;
}

int alg::selectionsort(int *V)
{
    bool modified = false;
    int value  = 0 ;
    for(int i = 1 ; i <= size ; i ++)
    {
        t1 = clock1.getElapsedTime();
        int p = i;
        for(int j = i + 1 ; j <= size ; j++)
        {
            if(V[j] < V[p])
            {
                p = j;
                modified = true;
                value = i ;
            }
        }
        swap(V[i] , V[p]);
        if(modified)
            return value;
//        t2 = clock1.getElapsedTime();
//        cout << clock1.getElapsedTime().asMicroseconds()<< endl;
//        if(t2 - t1 == sf::seconds(10))
//        {
//            renderWin(V, size);
//        }
        
    }
//    for(int i = 1 ; i <= size ;  i++)
//        cout << V[i] << " ";
    return -1;
}
