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

Font font;
Text textfps;

void mainWinInit()
{
    window.setFramerateLimit(10);
    ArrBar.setFillColor(Color::White);
    window.clear(Color::Black);
    font.loadFromFile("Resources/Menlo-Regular.ttf");
    if(! font.loadFromFile("Resources/Menlo-Regular.ttf"))
        cout << "err loading font" << endl;
    textfps.setString("speed (frames / seconds ) : " + to_string(30));
    textfps.setFont(font);
    textfps.setFillColor(Color::White);
    textfps.setCharacterSize(60);
    textfps.setStyle(Text::Bold);
    textfps.setPosition(1, 1);
    textfps.setScale(0.5, 0.5);
}

int renderArray(int *V , alg *alg1)
{
    for(int i = 1 ; i <= alg1 -> size ; i ++)
        cout << V[i] << " ";
    cout << endl << endl;
    for(int i = 1 ; i <= alg1->size ; i++)
    {
        window.draw(textfps);
        ArrBar.setScale(Vector2f(((WinX ) / alg1 -> size ) , - ((WinY) / alg1 -> size) * V[i] / 2));
        ArrBar.setPosition(WinX / alg1 -> size * (i-1) ,WinY - alg1 -> size / 3);
        window.draw(ArrBar);
    }
    
    if(alg1 -> algtype == "selectionsort")
    {
        alg1 -> selectionsort(V);
    }
    else if(alg1 -> algtype == "bubblesort")
    {
        alg1 -> bubblesort(V);
    }
    else if(alg1 -> algtype == "insertionsort")
    {
        alg1 -> insertionsort(V);
    }
    
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
        textfps.setString("Array size " + to_string(alg1 -> size ) + "   ");
        window.draw(textfps);
        
        window.display();
    }
    
    return 0;
}
