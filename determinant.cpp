/***************************************************************
** Author: Jim Underwood
** Date: 10/07/2019
** Description : determinant implementation file
***************************************************************/

#include <iostream>
#include "determinant.hpp"

/***************************************************************
**                        determinant                         **
** Description: Function takes two parameters - pointer to a  ** 
** 2D array, and an integer representing the size of matrix.  **
** It then populates the matrix one of two ways, depending on **
** what size the matrix is.                                   **
** It then calculates and returns the determinant of the      ** 
** matrix using one of two formulas.                          **
***************************************************************/
// Two parameters - pointer to a 2D array, int size of matrix
    int determinant(int **array, int size)
    {
        int determinant=0;
                        
        if(size==2)
        {
            // Get values from array
            int a=array[0][0]; int b=array[0][1];    
            int c=array[1][0]; int d=array[1][1];  
            
            // Formula for calculating determinant
            // https://www.mathsisfun.com/algebra/matrix-determinant.html
            determinant = a*d-b*c;
        }
        
        if(size==3)
        {
            // Get values from array
            int a=array[0][0]; int b=array[0][1]; int c=array[0][2];
            int d=array[1][0]; int e=array[1][1]; int f=array[1][2];
            int g=array[2][0]; int h=array[2][1]; int i=array[2][2];
            
            // Formula for calculating determinant
            // https://www.mathsisfun.com/algebra/matrix-determinant.html
            determinant =    (a * ((e*i)-(f*h)))
			   - (b * ((d*i)-(f*g))) 
		           + (c *((d*h)-(e*g)));
        }

        return determinant;
    }   

