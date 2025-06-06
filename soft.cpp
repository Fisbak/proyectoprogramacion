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
    int i, Dnimax;

    for(i=0; i<J ;i++){
        if(max<Pesopedido[i]){
            max=Pesopedido[i];
            Dnimax=DNIdelResp[i];
        }
    }

    return Dnimax;
}

string PedidomenosPesadoJujuy(int J, string responsable[100], float peso[100], string provdestino[100]){
    float min=10000000;
    int i, valormin;

    for(i=0; i<J; i++){
        if(provdestino[i]=="Jujuy"||provdestino[i]=="jujuy"){
            if(min>peso[i]){
                min=peso[i];
                valormin=i;
            }
        }

    }

    return responsable[valormin];
}

int dnidelcodigo(int Dni[100], int codigo[100], int J){
    int i, num;
    
    for(i=0; i < J; i++){
        if(codigo[i] == 0012655){
            num=Dni[i];
        }

    }

    return num;
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



    cout<<"La cantidad de pedidos facturados a nombre de Carlos son: "<<PedidosNombreDeCarlos(Responsable, j)<<endl;

    cout<<"El DNI del responsable que facturo el pedido mas pesado es: "<<DNIpedidoPesado(DNIResponsable, PesoDelPedido, j)<<endl;

    cout<<"El pedido mas liviano en Jujuy es de: "<<PedidomenosPesadoJujuy(j, Responsable, PesoDelPedido, ProvinciaDestino)<<endl;

    cout<<"El DNI del responsable que facturo el pedido con codigo 0012655 es: "<<dnidelcodigo(DNIResponsable, CodigoDePedido, j)<<endl;



}