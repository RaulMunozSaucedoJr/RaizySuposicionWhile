
//Materia: Estructura de Datos.
//Programa: Raiz y Suposici�n con funcion WHILE.

//Bibliotecas.
#include<stdio.h>
#include <math.h>
#include <windows.h>

//Inicia el programa.
main()
{
      float datoRaiz,datoSuposicion,variableRandom,Resultado=1; //datoRandom( dato de la raiz), dts (dato de suposicion) vr (variable Random),va (resultado para ver si se cumple la condicion)
      
      puts("Ingresar el numero a evaluar en la raiz cuadrada");//Se le pide al usuario  el numero a evaluar en la raiz cuadrada
      scanf("%f",&datoRaiz);//Leemos y guardamos en la variable datoRandom
      puts("Ingrese su suposicion del resultado");//Se le pide al usuario Ingrese su suposicion del resultado
      scanf("%f",&datoSuposicion);//Leemos y guardamos en la variable datoSuposicion
      while(variableRandom >= 0.0001)//Mientras el resultado NO sea mayor o igual a 0.0001 el ciclo se va a ejecutar
      { //Inicia el while
      variableRandom = (datoRaiz / datoSuposicion+datoSuposicion)/2 ; //formula para saber la raiz cuadrada de un numero solo sabiendo una suposicion del resultado
      Resultado= variableRandom-datoSuposicion; // asignamos el resultado de la diferencia de datoSuposicion y variableRandom
      Resultado= fabs(Resultado); //Asignamos a resultado el valor absoluto del mismo resultado.
      datoSuposicion=variableRandom; //Se le asigna a datoSuposicion el resultado de la operacion matematica de variableRandom
      } //Termina el while.
   
      printf ("El resultado correcto es: %.3f \n"  , variableRandom); //Se imprime el resultado en pantalla.
      
            system("pause");
      } //Termina el programa.
