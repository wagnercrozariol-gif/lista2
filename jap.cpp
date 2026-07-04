/*
   Este e o jogo do "Acertou: Perdeu"
   DESENVOLVIDO POR MARCO AURELIO
   Adaptado: nomes dos jogadores + mensagens de orientacao em 3 niveis
   Data: 28/05/26 -Lab. 213
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv)
{
	int oculto;
	int li;
	int ls;
	int vez;
	int palpite;
	int qtde;
	string nomes[5];
	bool jogoFinalizado = false;

	// Inicializa os limites e a vez
	li = 1;
    ls = 100;
    vez = 1;

	srand(time(NULL));
	oculto =  rand() % 100;

	do
	{
   	   cout << "Quantos jogadores vao participar? (2..5): ";
 	   cin >> qtde;
	}
	while (qtde < 2 || qtde > 5);

	// Entra com o nome de cada jogador
	for (int i = 0; i < qtde; i++)
	{
		cout << "Nome do jogador " << (i + 1) << ": ";
		cin >> nomes[i];
	}

    // Representa o LOOPING principal do programa
    do
    {
    	int erros = 0;

    	// Entra com o palpite
		do
	    {
   	        cout << nomes[vez - 1] << ", informe numero entre " << li << " e " << ls << ": ";
 	        cin >> palpite;

 	        if (palpite <= li || palpite >= ls)
 	        {
 	        	erros = erros + 1;

 	        	if (erros == 1)
 	        	{
 	        		cout << "Palpite invalido. Verifique." << endl;
 	        	}
 	        	else if (erros == 2)
 	        	{
 	        		cout << "Palpite continua invalido. Preste atencao no intervalo." << endl;
 	        	}
 	        	else
 	        	{
 	        		cout << "Sem condicao. " << nomes[vez - 1]
 	        		     << ", voce nao tem condicao de continuar participando. Voce perdeu!!!" << endl;
 	        		jogoFinalizado = true;
 	        	}
 	        }
     	}
     	while ((palpite <= li || palpite >= ls) && !jogoFinalizado);

     	// Se o jogador foi eliminado por excesso de erros, encerra o jogo
     	if (jogoFinalizado)
     	{
     		break;
     	}

     	// Verifica o palpite e ajusta os limites / Fim de jogo
     	if (palpite < oculto)
		 {
		 	// Ajusta Limite inferior
		 	li = palpite;
		 }
		 else
		 {
			 if (palpite > oculto)
			 {
			 	// Ajusta Limite superior
			 	ls = palpite;
			 }
			 else
			 {
  		 	     // Informa que perdeu
				 cout << "Parabens " << nomes[vez - 1] << ", voce perdeu!!!" << endl;
			 }
		 }

       vez = vez + 1;
       if (vez > qtde)
	   {
	   	vez = 1;
	   }

	}
	while (palpite != oculto);
	// Fim do LOOPING principal

	return 0;
}
