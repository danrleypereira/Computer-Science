# -*- coding: utf-8 -*-
#Number 3
import api

age = api.readNumber("Qual é a idade do nadador?")
print("Este nadador está na categoria: " + api.swimmerCategory(age))
