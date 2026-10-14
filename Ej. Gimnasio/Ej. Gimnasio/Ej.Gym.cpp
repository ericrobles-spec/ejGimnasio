#include  <iostream>
using namespace std;

class Tarifa {
private:
	double PrecioMensual;
	string NombreTarifa;
public:
	Tarifa(double p = 26.99, string n = "Básica") : PrecioMensual(p), NombreTarifa(n) {}
	void mostrarTarifa() {
		cout << "Nombre de la tarifa: " << NombreTarifa << endl;
		cout << "Precio mensual: " << PrecioMensual << endl;
	}		
};

class Socio {
private:
	string  Nombre;
	int idSocio;
	Tarifa tarifa;

public:
	Socio(string n = "Anónimo", int id = 0, Tarifa t = Tarifa()) : Nombre(n), idSocio(id), tarifa(t) {}
	void mostrarSocio() {
		cout << "Nombre del socio: " << Nombre << endl;
		cout << "ID del socio: " << idSocio << endl;
		tarifa.mostrarTarifa();
	}
};

class SocioVip : public Socio {
private: 
	double descuentoEntrenador;	
	Tarifa tarifaVip;
public:
	SocioVip(string n="Alfonso", int id=2, Tarifa t=Tarifa(26.99*0.85, "VIP")) :  tarifaVip(t) {}

	void mostrarSocio() {
		Socio::mostrarSocio();
		cout << "Descuento en entrenador personal: " << descuentoEntrenador * 100 << "%" << endl;
		tarifaVip.mostrarTarifa();
	}
};