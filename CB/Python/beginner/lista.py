def excecaoPy(a):
    try:
        a = a + 4
    except:
        print("isn't a number, but is a ->%s" % type(a))

def printList():
    lista = [1, 2, 4, 7]
    i=0
    for i in lista:
        print(i)

def printTupla():
    tupla = (4, 5, 6)
    print("tupla ->")
    for i in tupla:
        print(i)

def printDictionary():
    myDictionary = {'key1':22, 'key2':33}
    print "key1 = %d" % (myDictionary['key1'])

def printKeysTupla():
    myDictionary = {'key1':22, 'key2':33}
    print("Dictionaries")
    for i in myDictionary:
        print(i)
