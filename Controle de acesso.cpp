#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 0A");
	int so=0, ra=0, sai=0;
	int opcao, cp=1, ide=0, s=0, dn=1, d;
	int loop = 0, p, c, e, a; 
	char email[50][100], nome[50][100], id[100];
	int cadeiraP[15], cadeiraC[5], cadeiraPNE[5], cadeiraA[75];
	int cadeiras[100];

	do{
		printf("\t\t========================BEM-VINDO==========================\n\n");
		printf("\t\t==========================MENU=============================\n\n");
		printf("\n\t\t -->ESCOLHA UMA OPÇÃO\n");
		printf("\n\t\t 1-> RESERVA UMA CADEIRA\n");
		printf("\n\t\t 2-> SORTEIO (SOMENTE ORGANIZADORES)\n");
		printf("\n\t\t 3-> SAIR\n");
		printf("\n\t\t -->OPÇÃO:");
		
			scanf("%i",&opcao);
			system("CLS");
				
	
			
			switch(opcao){
				case 1:{
					
					if(cp==101){
						printf("\n\t\t--> LUGARES LOTADOS <--\n");
						loop=0;
						system("pause");
						system("CLS");
					}
					
					while(cp<=100&&dn==1){
						printf("\n\t\t-->DIGITE SEU NOME(SOMENTO O 1ºNOME):");
						scanf("%s",&nome[cp]);
						do{
							printf("\t\t-->ESCOLHA UMA OPÇÃO DE IDENTIFICAÇÃO");
							printf("\n\t\t 1-> ALUNO");
							printf("\n\t\t 2-> PROFESSOR(A)");
							printf("\n\t\t 3-> CONVIDADO");
							printf("\n\t\t 4-> PNE");
							printf("\n\t\t --> OPÇÃO:");
							scanf("%d",&id[cp]);
						
							if(id[cp]>0&&id[cp]<5){
							ide=1;
							}
							else{
								printf("\n\t\t-->OPÇÃO DE IDENTIFICAÇÃO INVALIDA<--");
								printf("\n\t\t-->ESCOLHE OUTRA OPÇÃO DE IDENTIFICAÇÃO\n");
								system("pause");
								system("CLS");
								ide=0;
							}
						}while(ide==0);
						
						
						printf("\t\t-->DIGITE SEU EMAIL:");
						scanf("%s",&email[cp]);
						system("CLS");
						
						if(id[cp]==1){
							while(s==0){
								printf("-->ESCOLHA UM LUGAR ALUNO(ENTRE O 25 Á 100)");
								printf("\n-->LUGARES OCUPADO:");
								for(a=0; a<=75; a++){
									printf("%i;",cadeiraA[a]);
								};
								a = cp;
								printf("\n----------------------------------------------------------------");
								printf("\n->01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20  |");
								printf("\n->21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40  |");
								printf("\n->41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60  |");
								printf("\n->61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80  |");
								printf("\n->81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 |");				
								printf("\n----------------------------------------------------------------\n");
								printf("-->LUGAR ESCOLHIDO:");
								scanf("%i",&cadeiraA[a]);
								printf("\n->DESEJA CONTINUAR?(1-SIM/2-NÃO)");
								scanf("%d",&d);
								if(cadeiraA[a]>24&&cadeiraA[a]<101){
							
									if(d==1){
										printf("-->TENHA UMA OTIMA PALESTRA ALUNO\n");
										system("pause");
										cadeiras[cp]=cadeiraA[a];
										s=1;
									}
									else{
										printf("-->ESCOLHA OUTRO LUGAR");
										system("pause");
									s=0;
									}	
								}
								else{
									printf("-->LUGAR INVÁLIDO");
									system("pause");
									s=0;
								}
								system("CLS");
							}
						}
						if(id[cp]==2){
							while(s==0){
								printf("-->ESCOLHA UM LUGAR PROFESSOR(A)(ENTRE 01 Á 15)");
								printf("\n-->LUGARES OCUPADOS:");
								for(p=0; p<=15; p++){
									printf("%i;",cadeiraP[p]);
								}
								p=cp;
								printf("\n----------------------------------------------------------------");
								printf("\n->01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20  |");
								printf("\n->21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40  |");
								printf("\n->41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60  |");
								printf("\n->61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80  |");
								printf("\n->81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 |");				
								printf("\n----------------------------------------------------------------\n");
								printf("-->LUGAR ESCOLHIDO:");
								scanf("%i",&cadeiraP[p]);
								printf("\n->DESEJA CONTINUAR?(1-SIM/2-NÃO)");
								scanf("%d",&d);
								if(cadeiraP[p]>00&&cadeiraP[p]<16){
							
									if(d==1){
										printf("-->TENHA UMA OTIMA PALESTRA PROFESSOR(A)\n");
										system("pause");
										cadeiras[cp]=cadeiraP[p];
										s=1;
									}
									else{
										printf("-->ESCOLHA OUTRO LUGAR");
										system("pause");
										
									s=0;
									}	
								}
								else{
									printf("-->LUGAR INVÁLIDO\n");
									system("pause");
									
									s=0;
								}
								system("CLS");
							}			
						}
						if(id[cp]==3){
							while(s==0){
								printf("-->ESCOLHA UM LUGAR CONVIDADO(A)(ENTRE 16 Á 20)");
								printf("\n-->LUGARES OCUPADOS:");
								for(c=0; c<=5; c++){
									printf("%i;",cadeiraC[c]);
								}
								c=cp;
								printf("\n----------------------------------------------------------------");
								printf("\n->01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20  |");
								printf("\n->21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40  |");
								printf("\n->41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60  |");
								printf("\n->61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80  |");
								printf("\n->81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 |");				
								printf("\n----------------------------------------------------------------\n");
								printf("-->LUGAR ESCOLHIDO:");
								scanf("%i",&cadeiraC[c]);
								printf("\n->DESEJA CONTINUAR?(1-SIM/2-NÃO)");
								scanf("%d",&d);
								if(cadeiraC[c]>15&&cadeiraC[c]<21){
							
									if(d==1){
										printf("-->TENHA UMA OTIMA PALESTRA CONVIDADO(A)\n");
										system("pause");
										cadeiras[cp]=cadeiraC[c];
										s=1;
									}
									else{
										printf("-->ESCOLHA OUTRO LUGAR");
										system("pause");
									s=0;
									}	
								}
								else{
									printf("-->LUGAR INVÁLIDO\n");
									system("pause");
									s=0;
								}
								system("CLS");
							}		
						}
						if(id[cp]==4){
							while(s==0){
								printf("-->ESCOLHA UM LUGAR PNE(ENTRE 21 Á 25)");
								printf("\n-->LUGARES OCUPADOS:");
								for(e=0; e<=5; e++){
									printf("%i;",cadeiraPNE[e]);
								}	
								e=cp;
								printf("\n----------------------------------------------------------------");
								printf("\n->01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20  |");
								printf("\n->21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40  |");
								printf("\n->41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60  |");
								printf("\n->61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80  |");
								printf("\n->81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 |");				
								printf("\n----------------------------------------------------------------\n");
								printf("-->LUGAR ESCOLHIDO:");
								scanf("%i",&cadeiraPNE[e]);
								printf("\n->DESEJA CONTINUAR?(1-SIM/2-NÃO)");
								scanf("%d",&s);
								if(cadeiraPNE[e]>20&&cadeiraC[e]<26){
							
									if(d==1){
										printf("-->TENHA UMA OTIMA PNE\n");
										system("pause");
										cadeiras[cp]=cadeiraPNE[e];
										s=1;
									}
									else{
										printf("-->ESCOLHA OUTRO LUGAR");
										system("pause");
									s=0;
									}	
								}
								else{
									printf("-->LUGAR INVÁLIDO\n");
									system("pause");
									s=0;
								}
								system("CLS");
							}
						}
						if(s==1){
			        	
			        		FILE *f = fopen("ACESSO A PALESTRA.txt", "a+");
			        		
			        		printf("-----------COMPROVANTE-----------");
							printf("\n->DIA DA PALESTRA: 06/12/2018<-");
							printf("\n->HORA DA PALESTRA: 08:25 AM<-");
							printf("\n--------------------------------");
			            	printf("\n->DATA DA RESERVA: %s",__DATE__);
			            	printf("\n->HORA DA RESERVA: %s",__TIME__);
			            	printf("\n->CADEIRA: %d", cadeiras[cp]);
			            	printf("\n->NOME: %s\n", &nome[cp]);
			            
							fprintf(f,"\n->DIA DA PALESTRA: 06/12/2018<-");
							fprintf(f,"\n->HORA DA PALESTRA: 08:25 AM<-");
							fprintf(f,"\n--------------------------------");			            
							fprintf(f, "\nDATA DA RESERVA: %s",__DATE__);
							fprintf(f, "\nHORA DA RESERVA: %s",__TIME__);
							fprintf(f, "\nCADEIRA: %d", cadeiras[cp]);
			            	fprintf(f, "\nNOME: %s\n", nome[cp]);
			            	fprintf(f, "---------------------------------");
							fclose(f);
						
							printf("\n-->FAZER OUTRA RESERVA?(1->SIM/2->NÃO): ");
			            	scanf("%d", &dn);
							s=0;
							if(dn==2){
								loop=0;
							}
							system("CLS");
						}
					cp++;
					}
				 break;	
				}
					
					
					
				case 2:{	
					printf("\t\t-------------------SORTEIO-------------------------\n");
					
					
					srand(time(NULL));
					so=0;
					
					do{
						ra = rand()%100;
						so++;
					}while(id[ra]==3||cadeiras[ra]==0&&so<1000);
					if(so==100){
						printf("\n-->NÃO TEM CADEIRAS PARA SER SORTEADAS");
					}
					else{
						printf("\t\t-->CADEIRA SORTEADA:%d\n",cadeiras[ra]);
						printf("\t\t-->NOME:%s\n",nome[ra]);
					}
					
					printf("\t\t-->DESEJA VOLTA AO MENU?(1-SIM/2-NÃO)");
					scanf("%d",&sai);
					if(sai==1){
						loop=0;
					}
					else{
						loop=1;
					}
					system("CLS");
					
					break;
				}
				
				
				case 3:{
				
					printf("\t\t--->ATÉ O PROXIMO EVENTO<---\n");
					loop=1;
					break;
				}
				
				
				
				default:{
					printf("\t\t--->OPÇÃO INVÁLIDA\n");
					printf("\t\t--->ESCOLHE OUTRA OPÇÃO\n");
					loop=0;
					system("pause");
					system("CLS");
					break;
				}
			}					
		}while(loop==0);	
	}
