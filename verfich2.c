// PRACTICA 2

/* Fuente: VERFICH2.C
   Programa: LEER FICHERO DE TEXTO MEDIANTE fgetc Y feof
   Descripci�n: Presenta en pantalla un fichero texto, leyendo car�cter 
   a car�cter mediante getc, y presentando el car�cter le�do en pantalla
   mediante putchar.
   Utiliza, combinada con fgetc, la funci�n feof.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
     FILE *fp;
     char nombre_fichero[] = "c:\\temp\\frases.txt";
     char c; /* Variable car�cter para lectura del fichero */
     
     system ("cls");

     if ( (fp=fopen(nombre_fichero, "r")) == NULL )
 	 { printf("ERROR. NO se puede abrir el fichero %s\n", nombre_fichero);
       printf ("\n");
       system ("pause");
       return 1;
	 }
	 
     printf ("CONTENIDO DEL FICHERO %s\n", nombre_fichero);
     printf ("========================================\n");

     c = fgetc(fp);

	 while ( !feof(fp) )
       { putchar(c);
         c = fgetc(fp);
       }

     fclose(fp);
     
	 printf ("\n========================================\n");

     printf("\n\n");
     system ("pause");
     return 0;
}







//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


// practica 2
lectura(fp);
while ( !feof(fp)) {

  //Tratamiento de los datos leidos

  lectura(fp);
}

// LECTURA(FP) PUEDE SER:
// int fgetc(FILE *fp);
// char *fgets (char *cadena, int n, FILE *fp);
// int fscanf(FILE *fp, const char *formato, arg1, .... ,)

// ej bucle que lee caracter a caracter un fichero de texto, cuenta el numeroo de letras matusculas que encuentra

int cuantos = 0;
char c;

c = fget(fp);
while ( !feof(fp)) {

  if ((c >= 'A' && c <= 'Z') || c == 'Ñ')
  cuantos ++;

  c = fgetc(fp);
}

