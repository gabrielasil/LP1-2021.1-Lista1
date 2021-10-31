#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.
	
	//Borda vertical esquerda
	if(P.x == IE.x && P.y >= IE.y && P.y <= SD.y){
		return location_t::BORDER;
	}

	//Borda vertical direita
	if(P.x == SD.x && P.y >= IE.y && P.y <= SD.y){
		return location_t::BORDER;
	}

	//Horizontal superior
	if(P.y == SD.y && P.x >= IE.x && P.x <= SD.x){
		return location_t::BORDER;
	}

	//Horizontal inferior
	if(P.y == IE.y && P.x >= IE.x && P.x <= SD.x){
		return location_t::BORDER;
	}
	
	//Dentro do retângulo
	if(P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y){
		return location_t::INSIDE;
	}

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return location_t::OUTSIDE;
}
