### Definiciones

#### <b>Automata:</b>
    - Un automata es un formalismo de computación capaz de reconocer si algo forma parte de un lenguaje o no segun las normas de un lenguaje. Esas maquinas estan conformadas por estados (iniciales,finales y no finales) y transiciones
#### <b>Estados: </b>
    - Un estado es una abstración de los valores de las variables internas de un sistema. Hay 3 tipos de estados: Estados iniciales (donde empieza el autómata), estados no finales (donde no termina el automata) y estados finales (adivinalo).

#### <b>Transiciones:</b>
    - Esto viene en conjunto con los estados. Ya sabemos que los estados son los valores que van tomando las variables de un sistema, pues las transiciones son el valor que se pasa de un estado a otro. Estos valores son simbolos terminales.

#### <b>Alfabeto y Lenguaje formal:</b>
    - Los autómatas funcionan con un lenguaje o alfabeto.
        El Alfabeto sería un conjunto de simbolos con el que se pueden crear distintas combinaciones para formar palabras
            ∑ = {0,1}
        El Lenguaje formal sería el conjunto de palabras o cadenas bien formadas mediante la combinación de los simbolos del alfabeto siguiendo unas determinadas reglas formales.
            L = {00, 01, 10, 11}

#### <b>Gramática:</b>
    - La gramtica son reglas formales que se establecen para la creación de palabras de un Lenguaje formal. No le da un significado solo indica cual debe de ser su forma.
#### <b>Reglas de producción:</b>
    - Las reglas de producción son los tipos de simbolos que se usan:

        Símbolos no terminales(A,B...) <-No son validos para que termine el autómata correctamente.

        Símbolos terminales(a,b) <- El autómata puede terminar correctamente al considerarlos validos.

        Símbolo lambda <- El autómata lo reconoce como una cadena vacia

## ¿Qué hace un autómata?
    Lo que hace un autómata es leer un símbolo que recibe de un input y si tiene una transición de dicho simbolo a otro estado el simbolo actualiza su estado. Si acaba la cadena en un estado final reconoce la cadena, en caso contrario la rechazará y no será correcta.

