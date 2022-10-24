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
    
    Sculptor narutin(101,101,101);

    narutin.setColor(1.0,0.0,0.5,1.0);

    narutin.putSphere(50,95,50,6);
    
    
    narutin.writeOFF("Visao3D.off");
}

/*teste.putSphere(10,10,10,10);
    teste.setColor(1.0,1.0,1.0,1.0);
    teste.putSphere(10,10,10,9);
    teste.cutSphere(10,10,10,8);
    teste.cutBox(0,21,0,21,0,6);

    teste.setColor(0.0,0.5,1.0,1.0);
    for(int x = 1; x < 16; x++){
        for(int y = 1; y < 16; y++){
            for(int z = 1; z < 16; z++){
                if(x == y && z == y){
                    teste.putVoxel(x,y,z-1);
                    teste.putVoxel(x-1,y,z);
                    teste.putVoxel(x,y,z);
                    teste.putVoxel(x+1,y,z);
                    teste.putVoxel(x,y,z+1);
                }
            }       
        }
    }
    teste.putVoxel(1,0,1);*/