#include <iostream>
using namespace std;





int PedidosNombreDeCarlos(string responsable[100], int J){
    int cont=0, i;

    for(i=0; i<J; i++){
        if(responsable[i]=="Carlos"||responsable[i]=="carlos"){
            cont++;
        }
    }
    return cont;
}









int DNIpedidoPesado(int DNIdelResp[100], float Pesopedido[100], int  J){
    float max=0;
    int i, Dnimax=0;

    for(i=0; i<J ;i++){
        if(max<Pesopedido[i]){
            max=Pesopedido[i];
            Dnimax=DNIdelResp[i];
        }
    }

    return Dnimax;
}


int main(){
    int CodigoDePedido[100], DNIResponsable[100], i=0, j=0;
    float PesoDelPedido[100], CostoDelPedido[100];
    string ProvinciaDestino[100], Responsable[100], ProvinciaOrigen[100];


    while(i==0){

        cout<<"Ingrese la provincia en la que se fabrico el pedido "<<j+1<<" (poner el nombre todo junto, ej: Buenos Aires seria BuenosAires)"<<endl;
        cin>>ProvinciaOrigen[j];

        cout<<"Ingrese el codigo del pedido "<<j+1<<endl;
        cin>>CodigoDePedido[j];

        cout<<"Ingrese el peso(en kilogramos) del pedido "<<j+1<<endl;
        cin>>PesoDelPedido[j];

        cout<<"Ingrese la provincia a la que debe llegar el pedido "<<j+1<<" (poner el nombre todo junto, ej: Buenos Aires seria BuenosAires)"<<endl;
        cin>>ProvinciaDestino[j];

        cout<<"Ingrese el costo del pedido "<<j+1<<endl;
        cin>>CostoDelPedido[j];

        cout<<"Ingrese el responsable del pedido "<<j+1<<" (ingresar solo el nombre)"<<endl;
        cin>>Responsable[j];

        cout<<"Ingrese el DNI del responsable del pedido "<<j+1<<endl;
        cin>>DNIResponsable[j];

        j++;

        cout<<"Desea continuar cargando pedidos? (si=0/No=1)"<<endl;
        cin>>i;





    }








}