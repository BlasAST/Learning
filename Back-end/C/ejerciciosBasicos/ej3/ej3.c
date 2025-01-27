// * 11. Realizar un programa que lea en primer lugar el nombre de un producto en oferta 3x2.  A 
// * continuación lea un conjunto indefinido de productos (hasta que el usuario no deseé leer 
// * más). De cada producto debe leer el nombre, la cantidad y el precio unidad. Mostrar el total 
// * de la factura a pagar teniendo en cuenta que si en la cesta hay algún producto que sea el que 
// * está en oferta 3x2 tendrá el descuento correspondiente. Además deberá mostrase la cantidad 
// * ahorrada en la compra.

#include <stdio.h>
#include <stdlib.h>
Nodo *cabeza=NULL;

typedef struct Producto{
    char nombreProducto[100];
    int cantidad;
    double precio;
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

void aniadirNuevoProducto(Nodo **cabeza,Producto *producto){

    Nodo *nuevoNodo= nuevoProducto(producto);
    nuevoNodo->siguiente=*cabeza;
    *cabeza=nuevoNodo;
    printf("Se ha guardado correctamente el producto\n");
}

void listarProductos(Nodo *cabeza){
    Nodo *temporal=cabeza;
    while(temporal!=NULL){
            printf("Producto %s: Cantidad: %d, Precio Unidad: %f",temporal->productos->nombreProducto,
            temporal->productos->cantidad,temporal->productos->precio);
            temporal=temporal->siguiente;
            }
}



int main(){
    printf("Vamos a hacer el carrito de tu compra\n");
    
}