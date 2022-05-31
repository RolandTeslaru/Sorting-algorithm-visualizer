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

void alg::bubblesort(int *V)
{
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
            }
        }
    }while(!sorted);
    
    for(int i = 1 ; i <= size ; i ++)
        cout << V[i] << " ";
}

int alg::selectionsort(int *V)
{
    bool modified = false;
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
            }
        }
        swap(V[i] , V[p]);
        if(modified)
            return i;
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
