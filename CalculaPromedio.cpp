package Clase3;
import java.util.Scanner;

public class Promedio {
	public static void main(String [] args) {
	System.out.println("Bienvenido al programa de promedio:");
	Scanner entrada = new Scanner(System.in);
	System.out.println("Ingrese su calificacion");
	double calif = entrada.nextDouble();
		if(calif<5) {
			System.out.println("Suspenso");
		}
		else if(calif>=5 && calif<6) {
			System.out.println("Suficientes");
		}
		else if(calif>=6 && calif<7) {
			System.out.println("Bien");
		}
		else if(calif>=7 && calif<9) {
			System.out.println("Notable");
		}
		else if(calif>=9 && calif<10) {
			System.out.println("Sobresaliente");
		}
		else if(calif==10) {
			System.out.println("Matricula de Honor!!");
		}
		else{
			System.out.println("Nota no valida");
		}
		
	}

}
