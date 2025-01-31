// *1. esProductoIgual: Reazliar una función que reciba como argumento un array numérico y nos diga si el producto
// *de los valores que se encuentran en las posiciones impares. El valor en la 
// *primera posicón [0] se considera impar.

// *Para probar la función se creará un método, crearArrayAleatorio[numElemens,n], que devolverá un
// *array generado aleatoriamente con el número de elementos comprendidos entre numElems y numElemn * 2 [primer argumento]
// *con valores, a su vez, aleatorios entre 1 y n, con n > 1[segundo argumento]

// *La 'aplicación' mostrará la información en el navegador [con documento.write()]: la matriz generada, el producto
// *de los pares e impares y la indicación de si el producto es igual o no.

function esProductoIgual(){
    crearArrayAleatorio(8,20);
    
}

function crearArrayAleatorio(numElemens,n){
    // Numero de elementos aleatorios generados entre numElemens y numElemens*2
    // valores aleatorios entre 1 y n siendo n > 1
    let array= Array.from({length:Math.round(Math.random() * (numElemens*2 -numElemens) + numElemens)},
    ()=>Math.round(Math.random() * n+1))
    console.log(array);
}

crearArrayAleatorio(8,20);
