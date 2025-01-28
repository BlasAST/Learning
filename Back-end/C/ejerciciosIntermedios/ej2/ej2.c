// * 11. Realizar un programa que lea en primer lugar el nombre de un producto en oferta 3x2.  A 
// * continuación lea un conjunto indefinido de productos (hasta que el usuario no deseé leer 
// * más). De cada producto debe leer el nombre, la cantidad y el precio unidad. Mostrar todos
// *los productos en el carrito


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

typedef struct Producto{
    char nombre [SIZE] ;
    int cantidad;
    float precioUnidad;
    struct Producto *siguiente;
}Producto;
 
void mostrarProductos(Producto *base){

    Producto *temporal=base;
    while(temporal!=NULL){
        printf("Producto: %s  , Cantidad: %d, Precio Unidad: %.2f\n",temporal->nombre,temporal->cantidad,temporal->precioUnidad);
        temporal=temporal->siguiente;
    }
    // free(temporal);
}

void liberarMemoria(Producto **base){
    Producto *temporal=*base;
    while(temporal!=NULL){
        *base=temporal->siguiente;
        free(temporal);
        temporal=*base;
    }
}


 void aniadirProducto(Producto **base){
    printf("Vamos a añadir productos hasta que escribas \"detener\"");
    char nombreDelProducto[SIZE];
    do
    {
    printf("Indicame el nombre del producto\n");
    fgets(nombreDelProducto,SIZE,stdin);
    nombreDelProducto[strcspn(nombreDelProducto,"\n")]='\0';
    if (strcmp(nombreDelProducto, "detener") == 0) {
        break;
    }

    Producto *nuevoProducto=(Producto *)malloc(sizeof(Producto));
    if(nuevoProducto==NULL){
        perror("Ocurrio un error en la asignación de memoria\n");
        exit(1);
    }

    strcpy(nuevoProducto->nombre,nombreDelProducto);
    printf("Indicame la cantidad del producto\n");
    scanf("%d",&(nuevoProducto->cantidad));
    while (getchar() != '\n');
    printf("Indicame el precio de la unidad\n");
    scanf("%f",&(nuevoProducto->precioUnidad));
    while (getchar() != '\n');
    nuevoProducto->siguiente=*base;
    *base=nuevoProducto;

    } while (1);
    mostrarProductos(*base);
    liberarMemoria(base);
}

int main(){
    Producto *base=NULL;
    char productoOferta[SIZE];
    printf("Indicame el producto que esta en oferta  3X2\n\n\n");
    fgets(productoOferta,SIZE,stdin);
    aniadirProducto(&base);

    return 0;
}