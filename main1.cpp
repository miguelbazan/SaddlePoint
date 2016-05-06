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
    const int iCOL = 10;
    const int iREN = 10;

    int iMatA [iREN][iCOL];
    int iR, iC, iN;
    int iContador = 0;
    int iArrMaxRen [iREN] = {INT_MIN,INT_MIN,INT_MIN};
    int iArrMinColumnas [iCOL] = {INT_MAX,INT_MAX,INT_MAX};

    cin>> iN;
    
    for (iR = 0; iR < iN; iR++)
    {
        for (iC = 0; iC < iN; iC++) // Leer numeros de la matriz
        {
            cin >> iMatA [iR][iC];
        }
    }
    while (iContador < iN)      // repetir las veces necesarias
    {
        for (iR = 0; iR < iN; iR++)     // recorrer por renglon
        {
            for (iC = 0; iC < iN; iC++)     // recorrer por columna
            {
                if (iMatA [iR][iC] > iArrMaxRen[iR])
                {
                    iArrMaxRen [iR] = iMatA [iR][iC];       // Verificar cual es el mayor de la posicion del renglon
                }
                if (iMatA [iR][iC] < iArrMinColumnas[iC])
                {
                    iArrMinColumnas [iC] = iMatA [iR][iC];      // verificar cual es el menor de la posicion de la columna
                }
            }
        }
        iContador++;
        
        for (iR = 0; iR < iN; iR++)
        {
            for (iC = 0; iC < iN; iC++)
            {
                if (iArrMaxRen [iR] == iArrMinColumnas [iC])        // verificar y desplegar
                {
                    cout<< iR <<" "<< iC << endl;
                    return 0;
                }
            }
        }

        for (iR = 0; iR < iN; iR++)
        {
            for (iC = 0; iC < iN; iC++)
            {
                if (iMatA [iR][iC] < iArrMaxRen[iR])
                {
                    iArrMaxRen [iR] = iMatA [iR][iC];       // verificar alreves, menor por renglon y mayor por columna
                }
                if (iMatA [iR][iC] > iArrMinColumnas[iC])
                {
                    iArrMinColumnas [iC] = iMatA [iR][iC];
                }
            }
        }
        iContador++;
        
        for (iR = 0; iR < iN; iR++)
        {
            for (iC = 0; iC < iN; iC++)
            {
                if (iArrMaxRen [iR] == iArrMinColumnas [iC])         // desplegar los resultados
                {
                    cout<< iR <<" "<< iC << endl;
                    return 0;
                }
            }
        }
    }//While
    
     cout<<"-1"<<" "<<"-1"<<endl;       // retornar si no hay punto silla
}
