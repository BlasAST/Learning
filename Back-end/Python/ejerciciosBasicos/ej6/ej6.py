# 8. Mostrar los caracteres de la cadena “Hola mundo”. 

cadena="Hola mundo"

def caracteresCadena(cadena):
    
    for caracter in range(len(cadena)):
        print(cadena[caracter])
        
    # for caracter in cadena:
        # print(caracter)

caracteresCadena(cadena)