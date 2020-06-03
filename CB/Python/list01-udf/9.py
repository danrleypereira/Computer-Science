# -*- coding: utf-8 -*_
#Number 9
import api

print( "O valor em dólar é " + str( api.realToDolar( api.readNumber("Qual é a cotação do dólar hoje?") , api.readNumber("Valor para converter?") )))
