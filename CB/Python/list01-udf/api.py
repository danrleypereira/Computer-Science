# -*- coding: utf-8 -*-
# here is where the magic happens
# all the functions used at each one of the questions

def readNumber(msg):
    try:
        x = input(msg)
    except:
        print("isn't a number, but is a ->%s" % type(a))
    return x

def isBetween(floor, roof, number):
    if(number > floor):
        if(number < roof):
            return True
    return False
        
def swimmerCategory(age):
    if(age >= 5 and age <=7 ):
        return "Infantil A"
    elif(age >= 8 and age <= 10):
        return "Infantil B"
    elif(age >= 11 and age <= 13):
        return "Juvenil A"
    elif(age >= 14 and age <= 17):
        return "Juvenil B"
    elif(age >= 18 and age <= 25):
        return "Sênior"
    else:
        return "idade fora da faixa etária"

def average(grades = [], *args):
    gradesSum = 0
    for grade in grades:
        gradesSum += grade

    return (gradesSum / len(grades))

def didStudentPassedOn(average):
    if(average < 7):
        return "reprovado"
    else:
        if(average == 10):
            return "aprovado com louvor"
        return "aprovado"

def realToDolar( dolarCotation, realValue ):
    return round( float(realValue) / float(dolarCotation), 3 )















