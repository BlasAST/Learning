# 6. Mostrar con un while los números del 1 al 100.
# 7. Mostrar con un for los números del 100 al 1  . 


def numerosWhile():    
    numero = 1
    while numero < 100:
        numero+=1
        print(numero)
numerosWhile()

def numeroFor():
    for numero in range(99,0,-1):
        print(numero)
numeroFor()
