#include <stdio.h>

void pergunta_1();
void pergunta_2();
void pergunta_3();
void pergunta_4();
void pergunta_5();
void pergunta_6();
void pergunta_7();
void pergunta_8();
void pergunta_9();
void pergunta_10();
void pergunta_11();
void pergunta_12();
void pergunta_13();
void pergunta_14();
void pergunta_15();

void jean_grey();
void tempestade();
void fenix();
void mistica();
void dente_de_sabre();
void magneto();
void wolverine();
void prof_xavier();
void homem_de_ferro();
void nick_fury();
void hulk();
void cap_america();
void viuva_negra();
void thor();
void loki();
void caveira_vermelha();
int i;
int main(){
	pergunta_1();
	return 0;
}

void pergunta_1(){
	printf("E um dos X-men? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_2();
	}else
	{
		pergunta_3();
	}

}

void pergunta_2(){
	printf("E do sexo feminino? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_4();
	}else
	{
		pergunta_5();
	}


}

void pergunta_3(){
	printf("E americano(a)? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_6();
	}else
	{
		pergunta_7();
	}


}

void pergunta_4(){
	printf("E um dos mocinhos? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_8();
	}else
	{
		pergunta_9();
	}


}

void pergunta_5(){
	printf("E um heroi? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_10();
	}else
	{
		pergunta_11();
	}


}

void pergunta_6(){
	printf("Tem super-poderes? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_12();
	}else
	{
		pergunta_13();
	}


}

void pergunta_7(){
	printf("Foi recrutado pela S.H.I.E.L.D.? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		pergunta_14();
	}else
	{
		pergunta_15();
	}


}

void pergunta_8(){
	printf("E telepata? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		jean_grey();
	}else
	{
		tempestade();
	}


}

void pergunta_9(){
	printf("Pode se passar pelo Justin Bieber? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		mistica();
	}else
	{
		fenix();
	}


}

void pergunta_10(){
	printf("Participou da segunda guerra mundial? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		wolverine();
	}else
	{
		prof_xavier();
	}


}

void pergunta_11(){
	printf("Usa capacete? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		magneto();
	}else
	{
		dente_de_sabre();
	}


}
void pergunta_12(){
	printf("Espancou dois deuses? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		hulk();
	}else
	{
		cap_america();
	}


}

void pergunta_13(){
	printf("E um genio, bilionario, playboy, filantropo? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		homem_de_ferro();
	}else
	{
		nick_fury();
	}


}

void pergunta_14(){
	printf("Extremamente apegado ao seu martelo? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		thor();
	}else
	{
		viuva_negra();
	}


}

void pergunta_15(){
	printf("E Asgardiano? (Digite 1 para SIM e 0 para NAO)\n");
	scanf("%d", &i);
	if(i)
	{
		loki();
	}else
	{
		caveira_vermelha();
	}


}

void jean_grey(){
    printf("Aha!!! O personagem que voce estava pensando era... A JEAN GREY!!!\n");


}

void tempestade(){
    printf("Aha!!! O personagem que voce estava pensando era... A TEMPESTADE!!!\n");


}

void fenix(){
    printf("Aha!!! O personagem que voce estava pensando era... A FENIX!!!\n");


}

void mistica(){
    printf("Aha!!! O personagem que voce estava pensando era... A MISTICA!!!\n");


}

void dente_de_sabre(){
    printf("Aha!!! O personagem que voce estava pensando era... O DENTE DE SABRE!!!\n");
}

void magneto(){
    printf("Aha!!! O personagem que voce estava pensando era... O MAGNETO!!!\n");
}

void wolverine(){
    printf("Aha!!! O personagem que voce estava pensando era... O WOLVERINE!!!\n");
}

void prof_xavier(){
    printf("Aha!!! O personagem que voce estava pensando era... O PROFESSOR XAVIER!!!\n");
}

void homem_de_ferro(){
    printf("Aha!!! O personagem que voce estava pensando era... O HOMEM DE FERRO!\n");
}

void nick_fury(){
    printf("Aha!!! O personagem que voce estava pensando era... O NICK FURY!!!\n");
}

void hulk(){
    printf("Aha!!! O personagem que voce estava pensando era... O HULK!!!\n");
}

void cap_america(){
    printf("Aha!!! O personagem que voce estava pensando era... O CAPITAO AMERICA!!!\n");
}

void viuva_negra(){
    printf("Aha!!! O personagem que voce estava pensando era... A VIUVA NEGRA!!!\n");
}

void thor(){
    printf("Aha!!! O personagem que voce estava pensando era... O THOR!!!\n");
}

void loki(){
    printf("Aha!!! O personagem que voce estava pensando era... O LOKI!!!\n");
}

void caveira_vermelha(){
    printf("Aha!!! O personagem que voce estava pensando era... O CAVEIRA VERMELHA!!!\n");
}

