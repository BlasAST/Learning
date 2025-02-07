// Inicializar la aplicacion haciendo peticiones
async function app(){
    let personaje1,personaje2;

    if(!personaje1){
        personaje1= await pedirPersonaje(personaje1);
    }
    if(!personaje2){
        personaje2= await pedirPersonaje(personaje2);
    }
    // Lanza la funcion de comparacion despues de filtrar los personajes
    comparacion(personaje1,personaje2);
}
app();

// Funcion que realiza la busqueda de los elementos HTML y llama al resto de funciones
// que muestran imagenes y nombres, compara el capitulo de aparición y lanza los eventos
// al pulsar los botones. Cuando sea correcto el botón cargarán nuevos personajes y Cuando
// no devolverá la puntuación total de acertados y recargará la pagina para volver a empezar
async function comparacion(p1,p2){
    let botones= document.querySelector(".botones");
    let [boton1 ,boton2]=[...botones.querySelectorAll(".botones > * ")]
    let game=document.querySelector(".game");
    let [caja1,caja2]=[...game.querySelectorAll('.game > *')];
    let resultado,puntuacion=0;
    mostrarImagenesyNombre(p1,p2,caja1,caja2);
    boton1.addEventListener("click",async ()=>{
        resultado=comparar(p1,p2);
        if(resultado==true){
            puntuacion+=1
            // Se puede unificar con lo de abajo
            p1=await pedirPersonaje(p1);
            p2= await pedirPersonaje(p2);
            mostrarImagenesyNombre(p1,p2,caja1,caja2);
        }else {alert(`Has fallado, tu puntuacion ha sido de:  ${puntuacion} puntos`);
        window.location.reload()}
    });
    boton2.addEventListener("click",async ()=>{
        resultado=comparar(p2,p1);
        if(resultado==true){
            puntuacion+=1
            p1=await pedirPersonaje(p1);
            p2= await pedirPersonaje(p2);
            mostrarImagenesyNombre(p1,p2,caja1,caja2);
        }else {alert(`Has fallado, tu puntuacion ha sido de:  ${puntuacion} puntos`);
                window.location.reload()}
    });

}
// Funcion que realiza la comparación de el personaje1 y personaje2 devolviendo un Booleano para el 
// procesamiento de la respuesta
function comparar(p1,p2){
    return p1.debut.anime.split("#")[1] >= p2.debut.anime.split("#")[1] ? true : false;
}
// Funcion que maneja la carga de imagenes y el nombre del personaje en el HTML
function mostrarImagenesyNombre(p1,p2,caja1,caja2){
    caja1.innerHTML="";
    caja2.innerHTML="";
    let nombre1=crearElemento("h3",p1.name);    
    let nombre2=crearElemento("h3",p2.name);
    caja1.appendChild(nombre1);
    caja2.appendChild(nombre2);
    caja1.style.backgroundImage= `url("${p1.images[0]}")`;
    caja2.style.backgroundImage= `url("${p2.images[0]}")`;
}
// Funcion que crea elementos en caso de que se tuvieran que crear nuevos para apendarlos
function crearElemento(ele,text,attr){
    let elemento= document.createElement(ele);
    if(text){
        let texto = document.createTextNode(text);
        elemento.appendChild(texto);
    }
    if(attr){
        elemento.setAttribute(attr[0],attr[1]);
    }
    return elemento;
}
// Funcion que realiza peticiones a la API hasta que cumpla con los requisitos pedidos
async function pedirPersonaje(personaje){
    do{
        personaje= await api(randomizer());
    }while(!(personaje.debut?.anime?.includes("#")));
    return personaje;
}
// Funcion que se encarga de obtener un numero aleatorio entre todos los id's de los personajes
// Que servira para llamar a pedirPersonaje que realizará las peticiones
function randomizer(){
    return Math.round(Math.random() * 772);
}

// Funcion que realiza las peticiones a la API
function api (aleatorio){
    const peticion= new XMLHttpRequest();

        return new Promise((resp,reject)=>{
            peticion.addEventListener("readystatechange",function(){
                if(peticion.readyState===4){
                            if(peticion.status>=200 && peticion.status<300){
                                resp(JSON.parse(peticion.responseText));
                            }else{
                                reject(console.log("Error"));
                            }
                }
                });
                peticion.open('GET',"https://narutodb.xyz/api/character/"+ aleatorio,true);
                peticion.send();
        });
}


