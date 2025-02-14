document.addEventListener("DOMContentLoaded",()=>{
    main();
    let snake= document.querySelector("head");
    
})

function main(){
    window.addEventListener("keydown",(event)=>{
        event.key=="ArrowUp"?console.log("Arriba"):
        event.key=="ArrowDown"?console.log("Abajo"):
        event.key=="ArrowRight"?console.log("Derecha"):
        event.key=="ArrowLeft"?console.log("Izquierda"):null;
    })
}

function mover(X,Y){
    setInterval(()=>{
        let cadena= `left: ${X} px;top: ${Y};transform:rotate();`
        snake.setAttribute("style",cadena);
    },2000)
}
