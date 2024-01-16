#include <iostream>

using namespace std;

int main() {
  
  int opcion;
  float saldo;
  float retiro;
  float deposito;

  saldo = 1000;

  
  do {
    cout << "Bienvenido a su cajero automático." << endl;
    cout << "Seleccione una opción:" << endl;
    cout << "1. Retirar dinero" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Consultar saldo" << endl;
    cout << "4. Salir" << endl;
    cout << "opcion: ";
    cin >> opcion;
    
    switch (opcion) {
      case 1:
     
        cout << "Ingrese el monto a retirar: ";
        cin >> retiro;

        
        if (retiro <= saldo) {
          
          saldo =saldo-retiro;// saldo-=retiro
          cout << "Retiro exitoso. Su saldo actual es de S/. " << saldo << endl;
        } else {
          cout << "Saldo insuficiente." << endl;
        }
        break;
      case 2:
      
        cout << "Ingrese el monto a depositar: ";
        cin >> deposito;

        saldo += deposito;
        cout << "Depósito exitoso. Su saldo actual es de $" << saldo << endl;
        break;
      case 3:
        
        cout << "Su saldo actual es de $" << saldo << endl;
        break;
      case 4:
        
        cout << "Gracias por usar nuestro cajero automático." << endl;
        break;
      default:
        
        cout << "Opción inválida." << endl;
        break;
    }
  } while (opcion != 4);

  return 0;
}
