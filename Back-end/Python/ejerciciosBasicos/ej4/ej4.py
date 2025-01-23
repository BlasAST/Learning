import random

# 4. Crea una variable numérica y si esta entre 0 y 10, mostrar un mensaje indicándolo. 
# Complicando el ejercicio:
#Que el numero generado sea un random del 1 al 100 y tratar de adivinar el mundo
# Hacer de alguna forma que se muestre el rango de 0-10 o 10-20... al que pertenece

numeroAleatorio= round(random.random()*100)

aproximacion=round(numeroAleatorio%10)
print( "El numero aleatorio es "+ str(numeroAleatorio))
print("El numero esta entre " + str(numeroAleatorio-aproximacion) + " y " 
+ str(numeroAleatorio-aproximacion+10))