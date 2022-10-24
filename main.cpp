/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
#include <fstream>
#include "sculptor.h"

using namespace std;

int main(){
    
    Sculptor teste(101,101,101);
    
    teste.setColor(1.0,0.0,0.0,1.0);

    teste.putEllipsoid(50,90,50,5,10,5);
    teste.cutEllipsoid(50,90,50,4,9,4);
    teste.putSphere(50,70,50,9);
    teste.cutSphere(50,70,50,8);
    teste.putBox(40,60,40,60,40,60);
    teste.cutBox(41,59,41,59,41,59);

    teste.cutBox(50,101,0,101,50,101);

    teste.setColor(0.0,1.0,0.0,1.0);

    teste.putVoxel(1,1,1);
    teste.putVoxel(2,2,2);
    teste.putVoxel(3,3,3);
    teste.putVoxel(4,4,4);

    teste.cutVoxel(2,2,2);
    teste.cutVoxel(3,3,3);

    teste.writeOFF("Visao3D.off");
}