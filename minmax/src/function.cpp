#include "function.h"
#include  <stdio.h>
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.
	int min_num = V[0], max_num = V[0], min = 0, max = 0;
	if(n == 0){
		return {-1, -1};
	}	

	for (int i = 1; i < n; i++) {
		if(min_num  > V[i]){
			min = i;
			min_num = V[i];
		}
		else if(max_num  <= V[i]){
			max = i;
			max_num = V[i];
		}
	}
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { min, max};
}
