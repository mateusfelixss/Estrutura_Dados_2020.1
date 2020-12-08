#include <iostream>

using namespace std;

int main()
{
    
    int qtd_produtos (0);
   // cout << "Digite a quantidade de produtos: " << endl;
    cin >> qtd_produtos;
   
    float preco_produto [qtd_produtos];
    float jogador1 [qtd_produtos];
    char jogador2 [qtd_produtos];


    //incrementando o preço dos produtos de acordo com o tamanho do vetor
    for (int i = 0; i < qtd_produtos; i++)
    {
        //cout << "Digite o valor do produto " << i + 1 << ":" << endl;
        cin >> preco_produto[i];
    }

    //recebendo os valores do primeiro jogador
    for (int i = 0; i < qtd_produtos; i++)
    {
       // cout << "Digite o valor: " << endl;
        cin >> jogador1[i];
    }
    
    cin.ignore();
    
    //recebendo os valores do segundo jogador
    for (int i = 0; i < qtd_produtos; i++)
    {
        //cout << "Digite se maior ou menor: " << endl;
        cin >> jogador2[i];
    }

    int pontosj1 (0);
    int pontosj2 (0);
    
   for (int i = 0; i < qtd_produtos; i++)
    {
        if (((preco_produto[i] > jogador1[i] ) && jogador2[i] == 'M') || ((preco_produto[i] < jogador1[i]  ) && jogador2[i] == 'm'))
        {
            pontosj2++;
            //cout << "Pontos j2: " << pontosj2 << endl;
        }else
        {
            pontosj1++;
            //cout << "Pontos j1 teste 2: " << pontosj1 << endl;
        }
    }

    //mostrando os pontos dos dois jogadores
    //cout << "Os pontos do jogador 1 foi: " << pontosj1 << endl;
    //cout << "Os pontos do jogador 2 foi: " << pontosj2 << endl;

    //teste para quem fez mais pontos
    if (pontosj1 > pontosj2)
    {
        cout << "primeiro" << endl;
    }else if (pontosj1 < pontosj2)
    {
        cout << "segundo" << endl;
    } else
    {
        cout << "empate" << endl;
    }
    

    return 0;
}