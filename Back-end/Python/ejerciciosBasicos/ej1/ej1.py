# 1. Crear dos variables numéricas, sumarlas y mostrar el resultado 

def suma(numero1,numero2):
    resultado= numero1 + numero2
    print(resultado)
try:
    numero1 = int(input("Dime un numero"))
    numero2 = int(input("Dime otro numero"))
    suma(numero1,numero2)
except ValueError:
    print("Solo me sirven numeros")