# <h1>Git</h1>
<p>
Git es un 
<ins>software de control de versiones que tiene como objetivo mejorar la eficiencia y la confiabilidad del mantenimiento de versiones de aplicaciones.
</ins>
Tiene como objetivo llevar registros de los cambios que se producen en los archivos locales de un editor y que dichos registros se coordinen con el trabajo que realizan otros desarrolladores. 
<ins>
Basicamente seria un cloud donde varios desarrolladores unifican su trabajo mediante unos archivos compartidos en un mismo repositorio.
</ins>
</p>

## Contenidos

- [¿Qué es el control de versiones?](#¿Qué-es-el-control-de-versiones?)

- [Cómo funciona el control de versiones](#Cómo-funciona-el-control-de-versiones)

-[Tipos de sistemas de control de versiones](#Tipos-de-sistemas-de-control-de-versiones)

- [Instalación de Git](#Instalación-de-Git)


## <h2> ¿Qué es el control de versiones?</h2>
<p>Es la 
<ins>capacidad de recordar los cambios que se realizan tanto en la estructura de los directorios como en el contenido de los archivos.
</ins>
Es útil si se desea mantener cierto control sobre los cambios que se realizan o si se desea recuperar un documento, carpeta, proyecto u otros compartidos por varias personas en un repositorio. Esto nos permite ver quien ha hecho los cambios, que ha hecho y cuando se hicieron
</p>
<br>
<p>Este tipo de herramientas facilitan mucho el trabajo y ayuda a aumentar la productividad.
Algunas de las funcionalidades que tienen los sistemas de control de versiones son:</p>

- Seguimiento de los cambios realizados en los archivos a lo largo del tiempo

- Compartir trabajo con otros desarrolladores realizando cambios y trabajo de forma simultánea.

- Posibilidad de hacer back-up en cualquier punto del desarrollo por comparar o retroceder a una versión anterior más estable.

- Lista de desarrolladores que participan en el repositorio e historial de modificaciones en las que se muestra quien realizo dichos cambios y de cuando fueron hechos.

- Acceso a un historial de cada archivo para poder observar sus cambios y como ha ido avanzando el proyecto.


## <h2>Cómo funciona el control de versiones</h2>
<p>Supongamos que queremos empezar a trabajar en un nuevo proyecto que ya existe en el repositorio de un servidor. Para poder trabajar con lo que ya existe en el proyecto deberemos de: </p>

- 1º Descargar/Clonar el proyecto del repositorio

- 2º Desarrollar lo que queramos aportar al proyecto

- 3º Una vez terminado, se deberá de subir al servidor para que otros desarrolladores puedan trabajar en el poryecto con tus cambios y unificarlos con los suyos.

> [!NOTE]
> Puede darse el caso de que varios desarrolladores trabajen sobre un mismo fichero. En estos casos el sistema esta preparado para detectarlo y evitar posibles problemas. El sistema los fusionará si es posible y si no notificará que hay un conflicto y se deberá de solucionar para poder subirlo al servidor.


## <h2>Tipos de sistemas de control de versiones</h2>

<p>Los sistemas de control de versiones han ido actualizando y se pueden clasificar en:</p>

- <span class="enuciadoLista">Sistemas locales:</span> Hacer que una carpeta de tu equipo local se convierta en repositorio. Todos los documentos, proyectos o trabajos que se encuentren dentro de la carpeta. También permite la recuperación de archivos borrados. Un ejemplo de esto es <ins><b>TortoiseSVN</b></ins>

- <span class="enuciadoLista">Sistemas centralizados:</span> Estos sistemas cuentan con un solo servidor en el que estará alojado el repositorio y tendremos herramientas para conectarnos al servidor y poder usarlo. Al estar en un servidor deberemos de acceder remotamente. Algunos ejemplos de esto son: <ins><b>CVS (Concurrent Versions System) o SVN (Apache Subversion)</b></ins>

- <span class="enuciadoLista">Sistemas distribuidos:</span> En este caso, no se cuenta con un unico servidor. Los servidores estan replicados por lo que cada usuario tendrá su repositorio y estará replicado, de esta forma cada usuario no obtiene solo la ultima copia de los archivos subidos al servidor si no que se copia completamente el repositorio. Al estar distribuidos si uno falla o se daña se podrá restaurar con alguna de estas copias. 
Algunos ejemplos son: 
<ins><b>Git, Mercurial, Bazaar o Darcs</b></ins>


## Instalación de Git




<style>

.enuciadoLista{
    color: green
}

</style>
