/*
Simple iterative implementation of the binary search algorithm, it works as follows:
                ->Assumption: the input array is sorted;
                -1) sets an iterative variable i to be 0, and enters a loop up to (the size of the array) /2;
                -2) Calculate midpoint of search range , and compare it with the target value:
                                if (midpoint  == target)
                                                return index of midpoint
                                if (midpoint < target) [a.k.a target at the right of the midpoint]
                                                update the search range : search range == right of midpoint
                                if (midpoint > target) [a.k.a target at the left of the midpoint]
                                                update the search range : search range == left of midpoint
*/

#include <stdio.h>
#include <stdlib.h>

int binary_search_iter(int T[], int deb,int fin, int X)
{
                if (deb>fin)
                                return -1;
                else {
                                int i = 0, X2 = fin, X1 = deb;
                                while(i <= (X2 - X1) / 2)
                                {
                                                int milieu = (deb + fin)/2;
                                                if (T[milieu] == X)
                                                                return milieu;
                                                else if (T[milieu] < X)
                                                                deb = milieu + 1;
                                                else if (T[milieu] > X)
                                                                fin = milieu -1;
                                                i++;
                                }
                                return -1;
                }
}

int main()
{
                int T[] = {0,1,2,3,4,5,6,7,8,9};
                int n = 10,X = 3;
                int res = binary_search_iter(T,0,n-1,X);
                if (res == -1)
                                printf("The element %d is not in the array. \n", X);
                else
                                printf("The element %d is found at the index %d in the array. \n", X, res);
}
