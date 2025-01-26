FROM gcc:4.9

# COPY . /app
# WORKDIR /app
# RUN ls
# RUN g++ -o a ./ejerciciosAvanzados/ej1/ej1.cpp
# CMD [ "./a" ]

# Comandos para ejecutar el codigo sin tener que instalar gcc en
# el sistema
# 1º Ejecutar la creación de la imagen cada vez que se quiere ejecutar un
# nuevo fichero. -> docker build -t cpp  <-(Es el nombre de la imagen que se irá sobreescribiendo)
# 2º Hacer la creación del contenedor que se autoelimina al finalizar:
    # docker run --rm cpp
# Otra forma seria crear un volumen que acceda directamente al directorio de trabajo 
# y trabajar con la terminal del contenedor que es lo que he hecho al final
# porque al pedir entrada de usuario se detenia y no dejaba que introducierá el input
# aunque la solución que encontré se podría tambien haber implementado aqui
