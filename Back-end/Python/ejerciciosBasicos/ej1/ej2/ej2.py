# 2. Mostrar el precio del IVA de un producto con un valor de 100 y su precio final. 
# si quieres calcular un precio con IVA, deberás multiplicar el precio sin IVA por 1,21.

def calculadoraIva():
    precioProducto=float(input("Dime el producto sin iva"))
    precioSinIVA=precioProducto
    precioProducto=precioProducto*1.21
    print("El precio del producto con IVA es "+ str(precioProducto) + 
    " \n el precio del iva es: " + str(round(abs(precioSinIVA-precioProducto),2))) 
    # No se puede concatenar string con digito

calculadoraIva()