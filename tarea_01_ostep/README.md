 #Trabajo 
 #Link video 
 * [https://www.youtube.com/watch?v=fcN15IHjknA&feature=youtu.be](https://www.youtube.com/watch?v=fcN15IHjknA&feature=youtu.be)

 * [mem.c](mem.c)
 Para el primer punto se uso el archivo mem.c tal y como se habia trabajado en clase, simplemente se uso el comando 
 sudo sh -c 'echo 0 > /proc/sys/kernel/randomize_va_space' para que la direccion se la misma al ejecutar el programa dos
 veces.


 * [threads.c](threads.c)
 El Segundo punto se uso el archivo threads.c el cual tenia tres include previamente escritos y uno de ellos utilizado
 segun  el documento de word de la tarea. 
 Las modificaciones al archivo fueron declaracion de la variable de tipo puerta el usar crear_puerta al principio en
 el main y destruirla al final, luego se incluyo el cerrar_puerta antes del for dentro de worker y al final del mismo
 for se uso abrir_puerta, todos estos recibiendo entre parentesis la variable declarada globalmente, asi pues se logro 
 que los hilos modificaran exitosamente la variable sin interrumpirse uno a otro.
 
 * [io.c](io.c)
 El tercer punto se usaron el archivo con el texto a invertir y io.c, se incluyo el metodo exists como se propuso,
 se declaro FILE y char, donde a la segunda se le asigno una ruta pasada como argumento, y el primero un retorno de fopen,
 luego de tener el archivo en fd se declaro i como -2 se uso fseek se ubico el puntero al final -i el cual vale -2, 
 se imprime la letra del puntero, se disminuyo en uno y se entra en un ciclo while que comprueba si el puntero no esta 
 en la posicion 1, luego se repite hasta que la condicion no se cumpla, se cierra y finaliza.
