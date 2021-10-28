#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
	unsigned int i = 2;
	vector<unsigned int> vetor;
	if(n == 1){
		return vetor;
	}
	vetor.push_back(1);
	vetor.push_back(1);
	while (vetor[i] !=  n) {
		if(vetor[i-1] + vetor[i-2] >=  n){
			break;
		}
		vetor.push_back(vetor[i-1] + vetor[i-2]);
		i++;
	}
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return vetor;
}
