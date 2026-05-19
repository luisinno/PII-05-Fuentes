/* Fuente: verfich1.c
   Programa: LEER FICHERO DE TEXTO MEDIANTE fgetc
   Descripci�n: Presenta en pantalla un fichero texto, leyendo car�cter 
   a car�cter mediante getc, y presentando el car�cter le�do en pantalla
   mediante putchar.
*/

// APERTURA Y CIERRE
#include <stdio.h>
#include <stdlib.h>

int main (void) {
     FILE *fp;
    const char nombre_fichero[] = "dato.txt";
    // char c; /* Variable car�cter para lectura del fichero */
     
     // system ("cls");

     if ( (fp=fopen(nombre_fichero, "r")) == NULL ) //si, tratamiento de error
 	 { printf("ERROR. NO se puede abrir el fichero %s\n", nombre_fichero);
       printf ("\n");
       system ("pause");
       return 1;
	 }
	 
   //  printf ("CONTENIDO DEL FICHERO %s\n", nombre_fichero);
   //  printf ("========================================\n");

    // while ( (c = fgetc(fp)) != EOF )
  	  //   putchar(c);
// cierre del fichero, antes de terminar el programa
     fclose(fp);

     printf ("\n========================================\n");

     printf("\n\n");
     system ("pause");
     return 0;
}

