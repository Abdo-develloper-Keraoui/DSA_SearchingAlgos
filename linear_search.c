/*Simple implementation of the linear search algorithm*/
#include <stdio.h>
#include <stdlib.h>

int linear_search(int T[], int N, int X)
{
                int i;
                for(i=0;i<=N-1;i++)
                {
                                if(T[i]==X)
                                                return i;
                }
                return -1;
}

int main()
{
                int T[] = {10,5,3,6,7,9,7,9,6,3};
                int n = 10,X = 3;
                int res = linear_search(T,n,X);
                if(res == -1)
                                printf("The element %d is not in the array. \n", X);
                else
                                printf("The element %d is found at the index %d in the array. \n", X, res);
}
