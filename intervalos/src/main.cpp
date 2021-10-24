/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
	float x, total{}, i1{}, i2{}, i3{}, i4{}, totali{};
	while (cin >> std::ws >> x) {
		if (x  >=  0 && x < 25) {
			i1++;
		}
		else if ( x  >=  25 && x < 50) {
			i2++;
		}
		else if (x >=  50 && x < 75) {
			i3++;
		}
		else if (x >= 75 && x < 100) {
			i4++;
		}
		total++;
	}

	totali = i1+i2+i3+i4;

	i1 = 100 * i1 / total;
	i2 = 100 * i2 / total;
	i3 = 100 * i3 / total;
	i4 = 100 * i4 / total;
	
	total = (100 * totali / total * (-1)) +  100  ;

	cout << setprecision(4) << i1 << '\n';
	cout << setprecision(4) << i2 << '\n';
	cout << setprecision(4) << i3 << '\n';
	cout << setprecision(4) << i4  << '\n';
	cout << setprecision(4) << total << '\n';
	
	
	
    return 0;
}
