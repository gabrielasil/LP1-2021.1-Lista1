#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/
	size_t tamanho = arr.size();
	for(int i = 0; i < tamanho; i++){
		swap(arr[i], arr[tamanho-1]);
		tamanho -= 1;
	}
}

