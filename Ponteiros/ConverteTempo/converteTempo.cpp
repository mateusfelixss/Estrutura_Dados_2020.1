#include <iostream>
using namespace std;

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg){

    int horaSegundos = 3600;

    *hor = (segundos / horaSegundos);
    *min = ((segundos - (horaSegundos * *hor)) / 60);
    *seg = (segundos - (horaSegundos * *hor) - *min * 60);
}

int main()
{
   int tempo, h, m, s;
   cin >> tempo;
   
   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
   
   converte_tempo(tempo, &h, &m, &s);
   cout << h << ":" << m << ":" << s;
   
   return 0;
}