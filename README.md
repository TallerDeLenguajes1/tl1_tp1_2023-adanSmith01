# :smile: Respuestas 
## :rocket: Archivo .gitignore 

### ¿Qué es el archivo .gitignore? 

El archivo .gitignore es un archivo de texto plano con el se permite ignorar tanto archivos de ciertas extensiones 
como carpetas que no son necesarias para nuestro proyecto.

### ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?
Existen archivos y/o carpetas que no necesitan (o deban) estar dentro de nuestro repositorio local ya sea porque
poseen información sensible o privada; pueden tratarse de archivos y/o carpetas efímeras que pueden ser generadas nuevamente, entre otros.
Si bien, tomando en cuenta el objetivo principal de este archivo, se puede pensar que nuestro repositorio local necesita solo de aquellos archivos y/o
directorios que aporten de manera relevante y trascendental a nuestro proyecto, excluyendo a aquellos que pueden aumentar drásticamente nuestro repositorio local.

A continuación, se mostrarán algunos casos donde el archivo .gitignore llegaría a ser muy necesario:

- Los archivos .exe o .o que provienen al ejecutar programas de lenguajes compilados como C o C++.
- Cachés de dependencias como es el caso de contenido de /node_modules o /packages.
- Directorios de salida de compilación, como es el caso de /bin, /out, /target.
- Particularmente, cuando se necesitan realizar muchas pruebas en ciertas partes de nuestro proyecto, se puede crear un directorio (o subdirectorio) llamado pruebas/ o tests/, que solo debe permanecer fuera de nuestro repositorio local.

### :hammer: Configuración del archivo .gitignore
Primero se debe crear un archivo de texto plano con el nombre .gitignore. Luego, se utilizarán patrones para poder hacer la exclusión de tanto archivos (de manera específica o general) como de directorios y/o subdirectorios. Entre esos patrones se encuentran:
- Ignorar un archivo en particular indicando nombre y extensión, por ejemplo: example.exe
- Ignorar todos los archivos de cualquier subdirectorio de la carpeta raíz del repositorio que pertenezcan a una extensión particular , por ejemplo, archivos ejecutables: **/*.exe;
- Ignorar todos los archivos que se encuentren en el mismo directorio donde se encuentra el archivo .gitignore, por ejemplo, archivos .log: *.log;
- Negar que un archivo sea excluido, habiendose determinado el patrón anterior: ! important.log (1)
- Excluir archivos y/o subdirectorios de un directorio, por ejemplo: buld/ ,  logs/, entre otros.

También, se pueden hacer comentarios con el símbolo # y dejar líneas en blanco para que el archivo quede más legible.

(1) El símbolo ! es para evitar, principalmente, que un archivo no sea excluido si es que previamente se realizó una exclusión directa de archivos de alguna extensión. Sin embargo, no aplica lo mismo si se ha ignorado un directorio que coincida con la extensión del archivo.

## Respuesta al ejercicio 2.3 apartado c
En el repositorio se encuentran los archivos son comunes en cualquier repositorio (README.md, .gitignore), un archivo de extensión .c y su archivo ejecutable, siendo este último innecesario tanto en el repositorio local como en el remoto.

## Respuesta al ejercicio 2.3 apartado g
En los apartados 2 y 3 muestran la dirección de una variable porque ambas son formas de referenciar a la misma. La diferencia es que una lo hace directamente (la que es llamada con el signo & y el nombre de la variable) y la otra indirectamente (con el puntero). 

En el punto 4, se muestra la dirección de memoria del puntero al que apunta la variable creada previamente; y, por supuesto, va a tener una dirección de memoria diferente a la de la variable debido a que, por definición, un puntero es una variable. Por lo que, como cualquier variable, tendrá una dirección de memoria distinta a otras.
