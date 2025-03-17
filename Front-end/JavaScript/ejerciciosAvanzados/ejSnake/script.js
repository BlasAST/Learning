document.addEventListener("DOMContentLoaded",()=>{
    main();
    
})

function main(){
    window.addEventListener("keydown",(event)=>{
        event.key=="ArrowUp"?mover("top"):
        event.key=="ArrowDown"?mover("bottom"):
        event.key=="ArrowRight"?mover("right"):
        event.key=="ArrowLeft"?mover("left"):null;
    })
}

let movimiento = 0;
let posicionamiento = {top : 0, left : 0};

function mover(eje){
    let snake= document.querySelector(".head");     
    if (movimiento) clearInterval(movimiento);

    movimiento = setInterval(()=>
        {
            if (eje == "top") posicionamiento.top -= 30;
            else if (eje == "bottom") posicionamiento.top += 30;
            else if (eje == "left") posicionamiento.left -= 30;
            else if (eje == "right") posicionamiento.left += 30;
            snake.style.top = `${posicionamiento.top}px`;
            snake.style.left = `${posicionamiento.left}px`;
        }, 500);
}