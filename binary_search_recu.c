/*
Simple recursive implementation of the binary search algorithm; it works as follows:
                ->Assumption: the input array is sorted;
                -1) Defines search range(initially: search range == entire array)
                -2) Calculate midpoint of search range, and compare it with the target value:
                                if (midpoint  == target)
                                                return index of midpoint
                                if (midpoint < target) [a.k.a target at the right of the midpoint]
                                                update the search range : search range == right of midpoint
                                if (midpoint > target) [a.k.a target at the left of the midpoint]
                                                update the search range : search range == left of midpoint
*/


#include <stdio.h>
#include <stdlib.h>

int binary_search_recu(int T[], int deb, int fin, int X)
{
                if (deb>fin)
                                return -1;
                else
                {
                                int milieu = (deb + fin)/2;
                                if (T[milieu] == X)
                                                return milieu;
                                else if (T[milieu]<X)
                                                return binary_search_recu(T,milieu+1,fin,X);
                                else if (T[milieu]>X)
                                                return binary_search_recu(T,deb,milieu-1,X);
                }
}


int main()
{
                int T[] = {0,1,2,3,4,5,6,7,8,9};
                int n = 10,X = 3;
                int res = binary_search_recu(T,0,n-1,X);
                if (res == -1)
                                printf("The element %d is not in the array. \n", X);
                else
                                printf("The element %d is found at the index %d in the array. \n", X, res);
}
