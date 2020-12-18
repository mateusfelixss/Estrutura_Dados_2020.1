#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int ptsPlayer01 = 0;
    int ptsPlayer02 = 0;
    //cout << "Qtd de apostas: ";
    cin >> n;
    double valores[n];      //valores das mercadorias
    double chutes[n];       //chutes de valores do player 1
    char apostas[n];         //palpite de Mais ou Menos do player 2
  //  char palpite;
    

    
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }

    for (int i = 0; i < n; i++){
        cin >> chutes[i];
    }
    
    for (int i = 0; i < n; i++){
        cin >> apostas[i];
    }
    
    int i;
    
   /* 

   //Karine
    for(i = 0; i < n; i++){
		if(((valores[i] > chutes[i]) && apostas[i] == 'M') || ((valores[i] < chutes[i]) && apostas[i] == 'm'))
			ptsPlayer01++;
	    else
		    ptsPlayer02++;
	}
    */
    
//		cout << "Teste 01" << endl;
        for (i = 0; i < n; i++){
//			cout << "Teste 02" << endl;
            if(valores[i] == chutes[i]){
//				cout << "Teste 03" << endl;
                ptsPlayer01++;
            }       
            else if(valores[i] > chutes[i]){
//				cout << "Teste 04" << endl;
                if(apostas[i] == 'M'){
//					cout << "Teste 05" << endl;
                    ptsPlayer02++;
                }    
            }else if (valores[i] < chutes[i]){
//				cout << "Teste 06" << endl;
                if(apostas[i] == 'm'){
//					cout << "Teste 07" << endl;
					ptsPlayer02++;
                }
            }
        }
//    cout << "Resultado " << ptsPlayer01 << endl;
//    cout << "Resultado " << ptsPlayer02 << endl;
    if(ptsPlayer01 > ptsPlayer02)
        cout << "primeiro" << endl;
    else if(ptsPlayer02 > ptsPlayer01)
        cout << "segundo" << endl;
    else if(ptsPlayer01 == ptsPlayer02){
        cout << "empate" << endl;
    }

}
