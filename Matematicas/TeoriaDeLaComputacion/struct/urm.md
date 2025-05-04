# Modelo URM

URM significa Unlimited Registers Machine, un modelo teórico de computación donde la maquina tiene registros ilimitados y puede almacenar **números naturales**

Un programa X se ejecuta con los datos almacenados en Y registros que se irán leyendo uno por uno.

Para manejar URM se hace uso de las siguientes instrucciones:

- S($n$) ≡ $n$ := $n$ + 1. Sucesor
- R($n$) ≡ $n$ := $n$ - 1. Predecesor
- O($n$) ≡ $n$ := 0. Cero
- T($n, m$) ≡ $n$ := $m$. Transferencia
- J($i$) Salto a la línea i. Salto
- J($n,m,i$) Si n = m salta a la linea i, de lo contrario continúa a la siguiente linea. Salto Condicional