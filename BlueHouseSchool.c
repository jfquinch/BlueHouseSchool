//Casita Azul
#include<stdio.h>
int main(){
    while(1){
        int elegir_usuario;//Declara variable para almacenar el valor que se desee
        printf("\nElija usuario\n");
        printf("1.profesor\n2.estudiante\n Elija una opción\t");
        scanf("%d",&elegir_usuario);//Recibe y almacena el dato
        switch(elegir_usuario){//Elegir opción a elegir por el usuario
            case 1:{
                profesor();
                break;
            }
            case 2:{
                estudiante();
                break;
            }
            case 3:{
                exit(1);
                break;
            }
            default:
                printf("Debe escoger una opción valida.\n");
            }
        }
}
//Ingresar notas del semestre
int profesor(){// Función profesor.
    int notas_estudiante[3];//Se declara arreglo de 3 posiciones para almacenar 3 notas
    int i;//Variable "i" para recorrer el arreglo
    for (i = 0; i < 3; i++){//For recorre arreglo con i
        printf ("Introduce 3 notas: ",i);//Pide al usuario las 3 notas con espacio de línea 
        scanf("%d", &notas_estudiante[i]);//Almacena las notas ingresadas por el profesor en el arreglo
    } 

}

int estudiante(){
    //Mostrar notas de estudiantes
    printf("\nSus notas son: \n");//Imprime enteros almacenados en el arreglo notas_estudiante
    for(i = 0; i < 3; i++){//for para recorrer el arreglo
        printf("%d ", notas_estudiante[i]);//Imprime en el terminal las notas ingresadas en notas_estudiante
    }
    //Promedio notas de estudiante

    int suma=0;//Variable para almacenar la suma de las notas del arreglo
    float promedio;//Variable promedio 
    for(i=0;i<3;i++){//ciclo for recorre arreglo notas_estudiante en las 3 posiciones
        suma=suma+notas_estudiante[i];//Recorre dato por dato del arreglo va sumando una a una
    }
    promedio=suma/3;//se divide entre 3 "número de notas" los valores obtenidos de la suma del arreglo
    printf("\nEl promedio de las notas del estudiante es: %d\n");//se imprime en pantalla el valor del promedio

    //Mostrar nota mayor

    int n_mayor;//declaración de variable para almacenar el valor mayor
        n_mayor = notas_estudiante[0];//n_mayor se inicializa en la posición 0 del arreglo
        for (i=0; i<3; i++){//ciclo for para recorrer arreglo añadiendo condiciones de comparación
            if (notas_estudiante[i]>n_mayor){//mientras que notas sea mayor que n_mayor almacenar en esta variable
            n_mayor=notas_estudiante[i];//n_mayor es igual al valor mayor ingresado en el arreglo
            }
    }
    printf("La nota más alta del estudiante es: %d",n_mayor,);
    //se imprimen nota mayor y menor
}   