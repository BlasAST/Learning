document.addEventListener("DOMContentLoaded",()=>{
    main();
    
})

function main(){
    window.addEventListener("keydown",(event)=>{
        event.key=="ArrowUp"?mover(`top:`):
        event.key=="ArrowDown"?console.log("bottom:"):
        event.key=="ArrowRight"?console.log("right:"):
        event.key=="ArrowLeft"?console.log("left:"):null;
    })
}

function mover(cadena, desplazamiento=50){
    let snake= document.querySelector(".head"); 
    let movimiento;
    if(movimiento){
        movimiento.clearInterval();
    }
    movimiento=setInterval(()=>{
        console.log(cadena);
        snake.setAttribute("style",cadena+desplazamiento+"px;");
        desplazamiento+=50;
    },500)
}
