// * 11. Realizar un programa que lea en primer lugar el nombre de un producto en oferta 3x2.  A 
// * continuación lea un conjunto indefinido de productos (hasta que el usuario no deseé leer 
// * más). De cada producto debe leer el nombre, la cantidad y el precio unidad. Mostrar el total 
// * de la factura a pagar teniendo en cuenta que si en la cesta hay algún producto que sea el que 
// * está en oferta 3x2 tendrá el descuento correspondiente. Además deberá mostrase la cantidad 
// * ahorrada en la compra.
// Estando ya finalizando el programa acabe de entener lo que pretendia el ejercicio, lo haré en otro apartado
//En este ejercicio lo que estoy haciendo es una cesta de la compra con memoria dinamica en la que se guardan
// todos los productos, a los que se le asigna un nombre,cantidad y precio. Se debe de añadir a una lista,
// además deben de poder mostrarse al usuario y tambien proceder a pagar la compra en la cual si la cantidad
// de los productos comprados es igual a 3 se lo llevará al precio de 2

#include <stdio.h>
#include <stdlib.h>


typedef struct Producto{
    char nombreProducto[100];
    int cantidad;
    float precio;
} Producto;

typedef struct Nodo{
    Producto *productos;
    struct Nodo *siguiente;
}Nodo;

Nodo *nuevoProducto(Producto *producto){
    Nodo *nuevo=(Nodo *)malloc(sizeof(Nodo));
    if(nuevo == NULL){
        perror("Ha ocurrido un error en la asignación de memoria");
        exit(1);
    }
    nuevo->productos=producto;
    nuevo->siguiente=NULL;
    return nuevo;
}

Nodo *cabeza=NULL;

void aniadirNuevoProducto(Nodo **cabeza,Producto *producto){

    Nodo *nuevoNodo= nuevoProducto(producto);
    nuevoNodo->siguiente=*cabeza;
    *cabeza=nuevoNodo;
    printf("Se ha guardado correctamente el producto\n");
}

void limpiarMemoria(Nodo **cabeza){
    Nodo *temporal;
    while(*cabeza!=NULL){
        temporal=*cabeza;
        *cabeza= (*cabeza)->siguiente;
        free(temporal->productos);
        free(temporal);
    }
    printf("Memoria liberada\n");
}

void menu(int opcion);
int main(){
    printf("Vamos a hacer el carrito de tu compra\n");
    int opcion=0;
    while(opcion!=3&&opcion!=4){
        printf("Selecciona una opción:\n\n");
        printf("1.Añadir producto\n");
        printf("2.Listar productos\n");
        printf("3.Ir a caja\n");
        printf("4.No comprar nada\n");
        scanf("%d",&opcion);
        while(getchar()!='\n');
        menu(opcion);
    }
}

void aniadirProducto();
void listarProductos(Nodo *cabeza);
void calcularCompra(Nodo *cabeza);
void menu(int opcion){
    switch(opcion){
        case 1:
            aniadirProducto();
        break;
        case 2:
            listarProductos(cabeza);
        break;
        case 3:
            calcularCompra(cabeza);
            limpiarMemoria(&cabeza);
        break;
        case 4:
        limpiarMemoria(&cabeza);
        printf("Hasta pronto\n");
        break;
        default:
            printf("Debes seleccionar una opcion valida");
        break;
    }
}

void aniadirProducto(){
    Producto *producto=(Producto *)malloc(sizeof(Producto));
    printf("Indicame el nombre del producto\n");
    fgets(producto->nombreProducto,sizeof(producto->nombreProducto),stdin);
    printf("Indicame la cantidad del producto que te vas a llevar\n");
    scanf("%d",&producto->cantidad);
    printf("Indicame el precio de la unidad del producto\n");
    scanf("%f",&producto->precio);
    while(getchar()!='\n');
    aniadirNuevoProducto(&cabeza,producto);
}

void listarProductos(Nodo *cabeza){
    Nodo *temporal=cabeza;
    while(temporal!=NULL){
            printf("Producto %s : Cantidad: %d, Precio Unidad: %.2f\n",temporal->productos->nombreProducto,
            temporal->productos->cantidad,temporal->productos->precio);
            temporal=temporal->siguiente;
            }
}

void calcularCompra(Nodo *cabeza){
    Nodo *temporal= cabeza;
    float compraTotal;
    printf("Estas en caja: \n");
    printf("Aqui tienes tu ticket\n\n");
    while(temporal!=NULL){
        float precioTotal=0;
        if(temporal->productos->cantidad == 3){
            precioTotal=temporal->productos->precio * 2;
            printf("%s= oferta 3X2 %.2f\n",temporal->productos->nombreProducto,precioTotal);
        }else{
            precioTotal=temporal->productos->precio * temporal->productos->cantidad;
            printf("%s= %.2f\n",temporal->productos->nombreProducto,precioTotal);
        }
        compraTotal+=precioTotal;
        temporal=temporal->siguiente;
    }
    printf("El total de la compra es: %.2f\n\n",compraTotal);
}

