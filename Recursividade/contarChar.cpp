#include <iostream>
#include <cstring>
using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int conta_char_rec(char s[], int n, char c){
   int cont = 0;
   int i = 0;

   if(n == 0)
      return 0;

   else if(i < n){
      cout << "Teste na funcao 01" << endl;
      if(s[i] == c){
         cout << "Teste na funcao 02" << endl;

         cout << "Contador antes do incremento: " << cont << endl;
         cout << "i antes do incremento: " << i << endl;

         cout << "Contador: " << cont << endl;
         cout << "i: " << i << endl;
         cont++;
         i++;
      }

   }
   conta_char_rec(s, n, c);
   cout << cont << endl;
   return cont;
}

int main(){
   char s[102], c;

   cin.get(s, 102);
   cin.ignore();
   cin >> c;

   int n = strlen(s); // pega número de caracteres de s

   // Chame a função aqui para imprimir na tela o número de ocorrências
   cout << "teste" << endl;
   cout << conta_char_rec(s, n, c);

   return 0;
}

/*
#include <iostream>
#include <cstring>
using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.

int conta_char_rec(char s[], int n, char c)
{
    int cont (0);

    for (int i = 0; i <= n; i++)
    {
        if (s[i] == c)
        {
            cont++;
        }   
    }
    return cont;
}

int main(){
   char s[102], c;
   
   cin.get(s, 102);
   cin.ignore();
   cin >> c;
   
   int n = strlen(s); // pega número de caracteres de s
   
   // Chame a função aqui para imprimir na tela o número de ocorrências
   cout << conta_char_rec(s, n, c) << endl;
   
   return 0;
}
*/