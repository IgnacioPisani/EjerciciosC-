// EjerciciosProgramacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();



int sumarDosNumeros(int num1,int num2);
int calcularDanio(int atq, int dfs);
int calcularDanioLimitado(int atq, int dfs);
std::string formatearTiempo(int horas, int minutos);
int main()
{
	ejercicio1();
	//ejercicio2();
	//ejercicio3();
	//ejercicio4(); 
	//ejercicio5();
	//ejercicio6();
	//ejercicio7();
	//ejercicio8();
	//ejercicio9();
	//ejercicio10();
	//ejercicio11();
	return 0;
}

void ejercicio1() {
	int PuntosIniciales = 0;
	int PuntosGanados = 0;
	std::cout << "Ingresar los puntos iniciales" << std::endl;
	std::cin >> PuntosIniciales;
	std::cout << "Ingresar los puntos ganados" << std::endl;
	std::cin >> PuntosGanados;
	std::cout << "Total de puntos: " << PuntosIniciales + PuntosGanados;
}

void ejercicio2() {
	int VidaActual = 0;
	int Danio = 0;
	std::cout << "Ingresar vida actual" << std::endl;
	std::cin >> VidaActual;
	std::cout << "Ingresar dano" << std::endl;
	std::cin >> Danio;
	std::cout << "Total de vida: " << VidaActual - Danio;
}


void ejercicio3() {
	int VidaActual = 0;
	int CantCuracion = 0;
	std::cout << "Ingresar vida actual" << std::endl;
	std::cin >> VidaActual;
	std::cout << "Ingresar cantidad de curacion" << std::endl;
	std::cin >> CantCuracion;
	std::cout << "Total de vida: " << VidaActual + CantCuracion;
}

void ejercicio4() {
	int NivelActual = 0;
	std::cout << "Ingresar Nivel actual" << std::endl;
	std::cin >> NivelActual;
	std::cout << "Exp. necesaria para el proximo nivel: " << NivelActual * 100;
}


void ejercicio5() {
	int CantMonedas = 0;
	int Multiplicador = 0;
	std::cout << "Ingresar cantidad de monedas" << std::endl;
	std::cin >> CantMonedas;
	std::cout << "Ingresar multiplicador" << std::endl;
	std::cin >> Multiplicador;
	std::cout << "Total de monedas: " << CantMonedas * Multiplicador;
}


void ejercicio6() {
	int CantMonedas = 0;
	int PrecioObjeto = 0;
	std::cout << "Ingresar cantidad de monedas" << std::endl;
	std::cin >> CantMonedas;
	std::cout << "Ingresar precio del objeto" << std::endl;
	std::cin >> PrecioObjeto;
	std::cout << "Total de monedas: " << CantMonedas - PrecioObjeto;
}

void ejercicio7() {
	int Numero1 = 0;
	int Numero2 = 0;
	std::cout << "Ingresar numero 1" << std::endl;
	std::cin >> Numero1;
	std::cout << "Ingresar numero 2" << std::endl;
	std::cin >> Numero2;
	std::cout << "Total: " << sumarDosNumeros(Numero1,Numero2);
}

int sumarDosNumeros(int num1, int num2) {
	return num1 + num2;
}

void ejercicio8() {
	int Ataque = 0;
	int Defensa = 0;
	std::cout << "Ingresar Ataque" << std::endl;
	std::cin >> Ataque;
	std::cout << "Ingresar Defensa" << std::endl;
	std::cin >> Defensa;
	std::cout << "Total: " << calcularDanio(Ataque, Defensa);
}

int calcularDanio(int atq, int dfs) {
	return atq - dfs;
}

void ejercicio9() {
	std::string Nombre = "";
	int Ataque = 0;
	int Defensa = 0;
	int VelAtaque = 0;
	int VidaMaxima = 0;
	int MultiplicadorDanio = 0;
	std::cout << "Ingresar Nombre" << std::endl;
	std::cin >> Nombre;
	std::cout << "Ingresar Ataque" << std::endl;
	std::cin >> Ataque;
	std::cout << "Ingresar Defensa" << std::endl;
	std::cin >> Defensa;
	std::cout << "Ingresar Velocidad de Ataque" << std::endl;
	std::cin >> VelAtaque;
	std::cout << "Ingresar Vida Maxima" << std::endl;
	std::cin >> VidaMaxima;
	std::cout << "Ingresar Multiplicador Danio" << std::endl;
	std::cin >> MultiplicadorDanio;
	std::cout << "Nombre: " << Nombre <<std::endl
	<< "Ataque: " << Ataque << std::endl
	<< "Defensa: " << Defensa << std::endl
	<< "Velocidad de Ataque: " << VelAtaque << std::endl
	<< "Vida Maxima: " << VidaMaxima << std::endl
	<< "Multiplicador Danio: " << MultiplicadorDanio << std::endl;

}

void ejercicio10() {
	int MinDia1 = 0;
	int MinDia2 = 0;
	int MinDia3 = 0;
	std::cout << "Ingresar minutos jugados el primer dia" << std::endl;
	std::cin >> MinDia1;
	std::cout << "Ingresar minutos jugados el segundo dia" << std::endl;
	std::cin >> MinDia2;
	std::cout << "Ingresar minutos jugados el tercer dia" << std::endl;
	std::cin >> MinDia3;
	int MinutosTotales = MinDia1 + MinDia2 + MinDia3;
	int HorasTotales = MinutosTotales / 60;
	int MinutosRestantesTotales = MinutosTotales % 60;
	int MinutosPromedio = MinutosTotales /3;
	int HorasPromedio = MinutosPromedio / 60;
	int MinutosRestantesPromedio = MinutosPromedio % 60;
	std::cout << "Total minutos: " << formatearTiempo(HorasTotales, MinutosRestantesTotales) << std::endl
		<< "Promedio: " << formatearTiempo(HorasPromedio, MinutosRestantesPromedio) << std::endl;
}

std::string formatearTiempo(int horas, int minutos) {
	char buffer[6];
	snprintf(buffer, sizeof(buffer), "%02d:%02d", horas, minutos);
	return std::string(buffer);
}

void ejercicio11() {
	std::string NombreJugador = "";
	int AtaqueJugador = 0;
	int DefensaJugador = 0;
	int VidaJugador = 0;
	std::string NombreEnemigo = "";
	int AtaqueEnemigo = 0;
	int DefensaEnemigo = 0;
	int VidaEnemigo = 0;
	std::cout << "Ingresar Nombre del Jugador" << std::endl;
	std::cin >> NombreJugador;
	std::cout << "Ingresar Ataque del Jugador" << std::endl;
	std::cin >> AtaqueJugador;
	std::cout << "Ingresar Defensa del Jugador" << std::endl;
	std::cin >> DefensaJugador;
	std::cout << "Ingresar Vida del Jugador" << std::endl;
	std::cin >> VidaJugador;
	std::cout << "Ingresar Nombre del Enemigo" << std::endl;
	std::cin >> NombreEnemigo;
	std::cout << "Ingresar Ataque del Enemigo" << std::endl;
	std::cin >> AtaqueEnemigo;
	std::cout << "Ingresar Defensa del Enemigo" << std::endl;
	std::cin >> DefensaEnemigo;
	std::cout << "Ingresar Vida del Enemigo" << std::endl;
	std::cin >> VidaEnemigo;
	std::cout << "La Vida inicial del Jugador es: " << VidaJugador << std::endl;
	std::cout << "La Vida inicial del Enemigo es: " << VidaEnemigo << std::endl;
	std::cout << "El jugador ejecuta un ataque..." << std::endl;
	std::cout << "El enemigo ejecuta un ataque..." << std::endl;
	VidaEnemigo -= calcularDanioLimitado(AtaqueJugador, DefensaEnemigo);
	VidaJugador -= calcularDanioLimitado(AtaqueEnemigo, DefensaJugador);
	std::cout << "La Vida final del Jugador es: " << VidaJugador << std::endl;
	std::cout << "La Vida final del Enemigo es: " << VidaEnemigo << std::endl;
}

int calcularDanioLimitado(int atq, int dfs) {
	int Danio = calcularDanio(atq, dfs);
	return Danio>=0 ? Danio : 0;
}