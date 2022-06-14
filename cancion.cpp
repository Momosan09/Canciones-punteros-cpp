#include "bits/stdc++.h"
using namespace std;

struct cancion
{
  string artista;
  string titulo;
  int duracion;
  int peso;
};

int n = 100;
cancion *can1 = new cancion[n];
int i, j = 0, elige, seguir = 1, contCanciones;
string busqueda;

int imprimir()
{
  cout << endl
       << "-- Mostrando todas las canciones --" << endl;

  for (i = 0; i < contCanciones; i++)
  {
    if (can1[i].titulo != "" && can1[i].artista != "")
    {
      cout << endl
           << "*******************";
      cout << endl
           << " Cancion " << i;
      cout << "\n+-----------------------------------+";
      cout << "\n+ Nombre de cancion\t: " << can1[i].titulo << "\t\t+";
      cout << "\n+ Nombre artista\t: " << can1[i].artista << "\t\t+";
      cout << "\n+ Duracion\t= " << can1[i].duracion << "\t\t+";
      cout << "\n+ Peso\t= " << can1[i].peso << "\t\t+";
      cout << "\n+-----------------------------------+";
    }
  }
}

int buscar()
{
  cout << endl
       << "-- Busqueda de cancion --" << endl;
  cout << " Ingrese nombre = ";
  cin >> busqueda;

  for (i = 0; i < sizeof(cancion); i++)
  {

    if (busqueda == can1[i].titulo)
    {

      cout << endl
           << "-- Se encontro cancion --"
           << endl
           << " La cancion con el titulo " << can1[i].titulo << " es la numero " << i << " en la lista";
      return 0;
    }
    else
    {
      cout << endl
           << "No se encontro cancion" << endl;
      return 0;
    }
  }
}

void ingresarCancion()
{
  cout << endl
       << " Ingrese nomrbe de artista : ";

  cin.ignore();
  getline(cin, can1[i].artista); // Chapuza de martin para arreglar espacio

  cout << endl
       << " Ingrese titulo : ";
  getline(cin, can1[i].titulo);

  cout << endl
       << " Ingrese duracion en segundos = ";
  cin >> can1[i].duracion;

  cout << endl
       << "\n Ingrese peso en Kb = ";
  cin >> can1[i].peso;

  contCanciones++;
}

int main()
{
  system("color b");

  cout << endl
       << "Elija opcion "
       << endl
       << "1.Ingresar cancion "
       << endl
       << "2.Buscar cancion"
       << endl
       << "3.Mostrar todas las canciones "
       << endl;
  cout << "Ingrese eleccion = ";
  cin >> elige;

  switch (elige)
  {
  case 1:
    system("color e");
    seguir = 1;
    while (seguir == 1 && j < 100)
    {
      ingresarCancion();
      cout << " -- Quiere Ingresar otra cancion? -- " << endl;
      cout << " 0-No/1-Si" << endl;
      cout << " Su eleccion es = ";
      cin >> seguir;
      cin.ignore();
      j++;
    }
    return main();
    break;
  case 2:
    system("color f");
    buscar();
    return main();
    break;
  case 3:
    imprimir();
    return main();
    break;
  default:
    cout << endl
         << "--- Ingrese opcion correcta ---";
    return main();
    break;
  }
}
