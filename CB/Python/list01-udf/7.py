# -*- coding: utf-8 -*_
#Number 7
import api

grades = []
grades.append( api.readNumber("Primeira nota:"))
grades.append( api.readNumber("Segunda nota:"))
grades.append( api.readNumber("Terceira nota:"))

#print(str(sum(grades) / len(grades)))
print( str( api.didStudentPassedOn( api.average(grades))))
