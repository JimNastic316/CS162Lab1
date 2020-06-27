/*************************************************************
** Author: Jim Underwood
** Due Date: 10/7/2019
** Description: This program asks the user if they want
** to enter a 2x2 or 3x3 matrix, and then asks them to
** enter values to use in the correspondin matrix.
** Then it displays the matrix and calculates the determinant
*************************************************************/
#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

int main()
{
// Ask the user to choose the size of the  matrix (2x2 or 3x3)
    std::cout<<"This program will calculate the determinant "
             <<"of a 2X2 or 3X3 matrix.\n"
             <<"Please enter 2 or 3: ";
   
    int size;
    
    std::cin >> size;

// Dynamically allocate the memory space for the a 2D array
// Code below is based on video at https://youtu.be/gNgUMA_Ur0U
    int** array = new int*[size];
    for (int i = 0; i < size; i++)
    {   
        array[i] = new int[size];
    }
    
// Use readMatrix() to prompt the user to enter 4 or 9 integers
    readMatrix(array, size);

// Calculate the determinant using determinant()
    int det=determinant(array, size);

// Display the matrix    
    std::cout<<"\nYour "<<size<<"X"<<size
             <<" matrix looks like this:\n";        
    for(int row=0; row<size; row++)
        {
            for(int col=0; col<size; col++)
                {
                    std::cout<<array[row][col]<<" "<<"\t";
                }
            std::cout<<std::endl;
        }
    
// Display the determinant    
    std::cout<<"\nThe determinant = "<<det<<"."<<std::endl;

// Free dynamically allocated memory
// Delete array contents
    for (int i = 0; i < size; i++)
        delete[] array[i];
// Delete array
    delete array;

    std::cout<<"Good Bye";
    return 0;
}
