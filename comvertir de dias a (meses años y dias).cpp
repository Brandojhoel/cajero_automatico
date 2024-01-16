#include <iostream>

using namespace std;

int main() {
  // Declaramos las variables
  int dias;
  int anios;
  int meses;
  int dias_mes;

  // Solicitamos el número de días
  cout << "Ingrese el número de días: ";
  cin >> dias;

  // Calculamos los años
  anios = dias / 365;

  // Calculamos los meses
  dias_mes = dias % 365;
  meses = dias_mes / 30;

  // Calculamos los días
  dias = dias_mes % 30;

  // Indicamos en qué mes recae el número de días
  switch (meses) {
    case 1:
      cout << "El número de días ingresado recae en el mes de enero.";
      break;
    case 2:
      cout << "El número de días ingresado recae en el mes de febrero.";
      break;
    case 3:
      cout << "El número de días ingresado recae en el mes de marzo.";
      break;
    case 4:
      cout << "El número de días ingresado recae en el mes de abril.";
      break;
    case 5:
      cout << "El número de días ingresado recae en el mes de mayo.";
      break;
    case 6:
      cout << "El número de días ingresado recae en el mes de junio.";
      break;
    case 7:
      cout << "El número de días ingresado recae en el mes de julio.";
      break;
    case 8:
      cout << "El número de días ingresado recae en el mes de agosto.";
      break;
    case 9:
      cout << "El número de días ingresado recae en el mes de septiembre.";
      break;
    case 10:
      cout << "El número de días ingresado recae en el mes de octubre.";
      break;
    case 11:
      cout << "El número de días ingresado recae en el mes de noviembre.";
      break;
    case 12:
      cout << "El número de días ingresado recae en el mes de diciembre.";
      break;
  }

  // Mostramos el resultado
  cout << endl;
  cout << "El número de días ingresado equivale a " << anios << " años, " << meses << " meses y " << dias << " días." << endl;

  return 0;
}
