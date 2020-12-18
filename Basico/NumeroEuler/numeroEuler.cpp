#include <iostream>
#include <iomanip>
using namespace std;

double fatorial(int n){
	double fat = 1;
	if(n >= 2){	
		for(int i = 1; i <= n; i++){
			fat = fat * i;
		}
		
	}else
		return 1;
	return fat;
}

double euler(int number){
	double eul = 0;
																															
	for(int i = 0; i <= number; i++){
		eul = eul  + (1/fatorial(i));
	
	}
	
	return eul;
}																																																																																																																																																																				
																											
int main(){
	double n;
	
	//n = euler(10);
	cin >> n;
	cout << std::fixed <<std::setprecision(6) << euler(n) << endl;
	//int result2;
	//int result3;
	//int result4;

	//result2 = fatorial(10);
	//result3 = fatorial(1);
	//result4 = fatorial(0);
	
	//cout << result2 << endl;
	//cout << "Fat(1)" << result3 << endl;
	//cout << "Fat(0)" << result4 << endl;
}
