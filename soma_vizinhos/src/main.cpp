/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void ){
    // TODO: Adicione seu código aqui. 
	int m{}, n{}, soma{};

	while (cin >> std::ws >> m >> n) {
		if(n > 0){
			for(int i = 0; i < n; i++){
				soma += m;
				m++;				
			}
			cout << soma << endl;
			soma = 0;
		}
		else if(n < 0){
			for(int i = 0; i > n; i--){
				soma += m;
				m--;
			}	
			cout << soma << endl;
			soma = 0;
		}else if(n == 0){
			cout << m << endl;
		}
	}
    return 0;
}
