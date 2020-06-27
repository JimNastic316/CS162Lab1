/***************************************************************
** Author: Jim Underwood
** Date: 10/07/2019
** Description : readMatrix implementation file
***************************************************************/

#include <iostream>
#include "readMatrix.hpp"

/***************************************************************
**                      readMatrix                            **
** Description: Function takes two parameters, a double       **
** pointer to an array, and an integer value that is the      **    
** size of the array. It askes the user to input integers     **
** and populates the values to their corresponding            **
** positions in that array.                                   ** 
***************************************************************/

    void readMatrix(int **a, int i)
    {                                                           
        std::cout<<"\nTo create the matrix, please enter "<<i*i
             <<" integers, one at a time.\n"
             <<"Hit <ENTER> after each integer."<<std::endl;
        for(int row=0; row<i; row++)
        {
            for(int col=0; col<i; col++)
                {
                    std::cin>>a[row][col];
                }
        }
    }
