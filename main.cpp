
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//função ligalampada
int Ligalampada( char AcaoLampada[] ){
	
	if (strcmp(AcaoLampada,"sim")==0){
		printf("Lâmpadas ligadas\n");
	}else{
		printf("Ok as lâmpadas continuarão desligadas\n");
	}
}




int main(){
setlocale(LC_ALL,"Portuguese");
char entrar[30];
char Abrir_Quarto[30];
char EstadoLampada[30];
char AcaoLampada[30];
char resul[30];
int Vetor_Gavetas[5]={1,2,3,4,5};
int *Abre_Gaveta;
int gaveta=0,i=1;

Abre_Gaveta=Vetor_Gavetas;
	//1º loop: Painel que usa estrurura de repetição para entrar na casa
	do{
		printf("Deseja entrar na casa?\n");
		scanf("%[^\n]",entrar);
		getchar();
	}while(strcmp(entrar,"sim")!=0);
	
	printf("Bem Vindo!\n");
	
		//Chamada da função para ligar lampadas
		printf("Deseja ligar as lâmpadas?\n");
		scanf("%[^\n]",AcaoLampada);
			resul[30]=Ligalampada(AcaoLampada);
				
				//Loop for, vetor gavetas e ponteiro do vetor
				printf("Qual das gavetas de 1 a 5 você deseja abrir?\n");
					scanf("%d",&gaveta);
						
					for (i=0;i<=5;i++)
						if(Abre_Gaveta[i]==gaveta){
								printf("Gaveta %d aberta\n",gaveta);
							}
								
									//2º loop: Painel que usa estrurura de repetição para entrar no qaurto
									do{
											printf("Abrir  a porta do quarto?\n");
											scanf("%[^\n]",Abrir_Quarto);
											getchar();
									}while(strcmp(Abrir_Quarto,"sim")!=0);
									printf("Porta do quarto Aberta!\n");
}

