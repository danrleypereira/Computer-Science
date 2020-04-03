# -*- coding: utf-8 -*-
#Number 2
import api

start = api.readNumber("Qual é o início do intervalo?")
end = api.readNumber("Qual é o fim do intervalo?")
number = api.readNumber("Qual é o número para verificar se está no intervalo?")

if(api.isBetween(start, end, number)):
    print("está no intervalo!")
else:
    print("não está no intervalo")
