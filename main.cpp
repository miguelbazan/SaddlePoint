//
//  main.cpp
//  Punto Silla
//
//  Created by Miguel Bazán on 1/19/15.
//  Copyright (c) 2015 MiguelBazan. All rights reserved.
//

#include <iostream>
#include <climits>
#include <limits.h>
using namespace std;


int main(int argc, const char * argv[])
{
    int iCOL;
    int iREN;
    int iMatA [iREN][iCOL];
    int iN;
    int iRFinal, iCFinal, iMaxFinal, iMinFinal;
    int MaxRen = INT_MIN;
    int MinColumnas = INT_MAX;
    
    cin>> iN;
    
    for (int iR = 0; iR < iN; iR++)
    {
        
        for (int iC = 0; iC < iN; iC++)
        {
            cin >> iMatA [iR][iC];
        }
    }
    
    
        for (int iR = 0; iR < iN; iR++)
        {
            int MaxRen = INT_MIN;
            int MinColumnas = INT_MAX;

            
            for (int iC = 0; iC < iN; iC++)
            {
                if (iMatA [iR][iC] > MaxRen)
                {
                    MaxRen  = iMatA [iR][iC];
                }
               
                
            }


        
    }
       return 0;
}
