//
//  Render.cpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//

#include "Render.hpp"
#include "Algorithm.hpp"
RectangleShape ArrBar(Vector2f(1.f, 2.f));
RenderWindow window(VideoMode(WinX , WinY) , "TeSt " );

string type;

void mainWinInit()
{
    window.setFramerateLimit(10);
    ArrBar.setFillColor(Color::White);
    window.clear(Color::Black);
}

int renderArray(int *V , alg *alg1)
{
    cout << endl << endl;
    for(int i = 1 ; i <= alg1->size ; i++)
    {
        ArrBar.setScale(Vector2f((WinX / alg1->size ), - (WinY / alg1->size) * V[i] / 2));
        ArrBar.setPosition(WinX / alg1->size * i ,WinY);
        window.draw(ArrBar);

    }
    alg1->selectionsort(V);
    
    
    return 0;
}

int renderWin(int *V  , alg *alg1 )
{
    cout << endl << endl;
    
    window.clear();
    while(window.isOpen())
    {
        window.clear();
        Event mainEvent;
        while(window.pollEvent(mainEvent))
        {
            if(mainEvent.type == mainEvent.Closed)
                window.close();
        }
        renderArray(V , alg1);
        
        window.display();
    }
    
    return 0;
}
