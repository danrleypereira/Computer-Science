/*	Name: 
	Copyright:  CC0 license
	Author: Danrley Pereira
	Date: 03/05/21 11:06
	Description: Struct anônimo;

    Enunciado.: Defina um tipo de estrutura para armazenar os dados de um
    vôo como, por exemplo, os nomes das cidades de origem e destino, datas e
    horários de partida e chegada. Crie uma variável desse tipo e atribua valo-
    res aos seus memros usando a notação de ponto e, depois, inicialização.
*/
	
	#include <stdio.h>
	#include <string.h>
    // estrutura data
    typedef struct {
        int dia;
        int mes;
        int ano;
    } Data;

    //estrutura horario
    typedef struct  {
        int hora;
        int minuto;
        int segundo;
    } Horario;

    //estrutura Voo
	typedef struct {
		char origem[40];
		char destino[40];
		Data dataPartida;
        Data dataChegada;
        Horario horarioPartida;
        Horario horarioChegada;
	} Voo;

    int main(){
        // declara voo
        Voo voo;

        //atribuindo valores usando notação de ponto
        strcpy(voo.origem, "Piracicaba");
        strcpy(voo.destino, "Cafundó do Judas");

        Data dataPartida = {13, 4, 1997};
        Data dataChegada = {13, 4, 1997};
        voo.dataPartida = dataPartida;
        voo.dataChegada = dataChegada;
        
        Horario horarioPartida = {16, 25, 12};
        Horario horarioChegada = {22, 36, 15};
        voo.horarioPartida = horarioPartida;
        voo.horarioChegada = horarioChegada;
        // fim da inicialização de ponto

        //atribuindo valores usando inicialização 
        Voo voo1 = {"Piracicaba", "Cafundó do Judas", {13, 4, 1997}, {13, 4, 1997}, {16, 25, 12}, {22, 36, 15}};

        // printf("origem: %s \n destino: %s ", voo.origem, voo.destino);
        // printf("data de partida: %d/%d/%d\n", voo.dataPartida.dia, voo.dataPartida.mes, voo.dataPartida.ano);
        
		return 0;
	}