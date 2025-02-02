// *1. esProductoIgual: Reazliar una función que reciba como argumento un array numérico y nos diga si el producto
// *de los valores que se encuentran en las posiciones impares. El valor en la 
// *primera posicón [0] se considera impar.

// *Para probar la función se creará un método, crearArrayAleatorio[numElemens,n], que devolverá un
// *array generado aleatoriamente con el número de elementos comprendidos entre numElems y numElemn * 2 [primer argumento]
// *con valores, a su vez, aleatorios entre 1 y n, con n > 1[segundo argumento]

// *La 'aplicación' mostrará la información en el navegador [con documento.write()]: la matriz generada, el producto
// *de los pares e impares y la indicación de si el producto es igual o no.

function esProductoIgual(){
    let datos=crearArrayAleatorio(8,20);
    let div = document.createElement('div');
    let numeroImpares= (datos[0]+',' + datos.filter((v,i)=>i%2!=0)).split(',');
    let numeroPares= datos.filter((v,i)=>i%2==0&&i!=0);
    let sumaPares = numeroPares.reduce((a,v)=>a+parseInt(v),0);
    let sumaImpares = numeroImpares.reduce((a,v)=>a+parseInt(v),0);

    div.innerHTML=`
        <h1>Datos= ${datos}</h1>
        <h2>Numeros impares: ${numeroImpares}</h2>
        <h2>Numeros pares: ${numeroPares}</h2>
        <h3>Suma pares: ${sumaPares}</h3>
        <h3>Suma impares: ${sumaImpares}</h3>
    `;
    document.body.appendChild(div);
}

function crearArrayAleatorio(numElemens,n){
    // Numero de elementos aleatorios generados entre numElemens y numElemens*2
    // valores aleatorios entre 1 y n siendo n > 1
    return Array.from({length:Math.round(Math.random() * (numElemens*2 -numElemens) + numElemens)},
    ()=>Math.round(Math.random() * n+1))
}
esProductoIgual(); 
