"""
15. Pide dos cadenas por teclado, muestra ambas cadenas con un espacio entre ellas y 
con los 2 primeros caracteres intercambiados. Por ejemplo, hola mundo pasaría a 
mula hondo
"""
# Funcion principal
def main():
    printear(intercambioCaracteres(pedirNumeros()))

# Pedir datos
def pedirNumeros():
    print("Vamos a unir dos palabras cambiando la primera letra de una por la de la otra")
    cadena1=input("Dime una palabra: ")
    cadena2=input("Dime otra palabra: ")
    return cadena1,cadena2

# Generar intercambio de caracteres
def intercambioCaracteres(cad1):
    return cad1[1][0]+cad1[0][1:],cad1[0][0]+cad1[1][1:]

# Imprimir una vez intercambiados los caracteres
def printear(cadenas):
    print(f"Las palabras quedarian asi: \n {cadenas[0]}\
            y {cadenas[1]}")

main()