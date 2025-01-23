# 3. De dos números, saber cual es el mayor.
try:
    print("Vamos a comparar dos numeros")
    numero1= int(input("Dime un numero"))
    numero2= int(input("Dime otro numero"))
    # Uso del operador ternario
    print("El mayor de los dos es: " + str(numero1 if numero1>numero2 else numero2))
except ValueError:
    print("Tienen que ser numeros")

