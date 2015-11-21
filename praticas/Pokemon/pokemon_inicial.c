#include <stdio.h>

void imprime_hp_gyarados(int hp_gyarados){
     printf("HP Gyarados:\t%d\n", hp_gyarados);
}

void imprime_hp_zapdos(int hp_zapdos){
     printf("HP Zapdos:\t%d\n", hp_zapdos);
     printf("HP Gyarados:\t%d\n", hp_gyarados);
}

void imprime_golpes(){
        printf("Golpes:\n");
        printf("1) Thunderbolt\n");
        printf("2) Tackle\n");
        printf("3) Peck\n");
        printf("4) Zap cannon\n");
}

void thunderbolt(){
	printf("Zapdos usou Thunderbolt! E super efetivo!\n");
}

void tackle(){
	printf("Zapdos usou Tackle! E super efetivo!\n");
}

void peck(){
	printf("Zapdos usou Peck! E super efetivo!\n");
}

void zap_cannon(){
	printf("Zapdos usou Zap cannon! E super efetivo!\n");
}

void golpe_invalido(){
	printf("Golpe invalido. Escolha uma opcao valida.\n");
}

void gyarados_desmaiou(){
	printf("O Gyarados adversario desmaiou! Voce derrotou Red!\n");
}

void zapdos_desmaiou(){
	printf("O Zapdos de Blue desmaiou! Voce foi derrotado!\n");
}

void dragon_rage(){
	printf("Gyarados usou Dragon rage! E super efetivo!\n");
}

void splash(){
	printf("Gyarados usou Splash! E super efetivo!\n");
}

int main(){
	// Coloque seu código aqui...
    return 0;
}
