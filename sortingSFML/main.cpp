//
//  main.cpp
//  sortingSFML
//
//  Created by Roland Teslaru on 28.05.2022.
//
#include "GlobalLibs.h"
#include "Array.hpp"
#include "Algorithm.hpp"
#include "Render.hpp"

using namespace std;
using namespace sf;

int main()
{
    int size =100;
    int V[size+1];
    
    string type;
    type = "normal";
    
    alg alg1;
    arr MainArray;
    mainWinInit();
    
    MainArray.setsize(size);
    alg1.setsize(size);
    MainArray.generate_arr(V, type);
    
    MainArray.shuffle_arr(V);
    MainArray.show_arr(V);
    renderWin(V  , &alg1);
    
}
