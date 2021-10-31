/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    // TODO: Adicione aqui seu código.
	Ponto V1, V2, IE, SD, P;
	int verify{};	
	while (cin >> std::ws >> V1.x >> V1.y >> V2.x >> V2.y >> P.x >> P.y) {
		if(V1.x == V2.x  && V1.y == V2.y){
			cout << "invalid" << endl;
		}

		else if(V1.x <=  V2.x && V1.y <=  V2.y){
			verify = pt_in_rect(V1, V2, P);
		}
	
		if(verify == 0){
			cout << "inside" << endl;
		}
		
		else if(verify == 1){
			cout << "border" << endl;
		}
		
		else if(verify == 2){
			cout << "outside" << endl;
		}
	}
	

    return 0;
}
