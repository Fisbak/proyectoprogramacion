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

float porcentajePedidosPesoMedio(float PesoDelPedido[], int totalPedidos) {
    int contador = 0;

    for (int i = 0; i < totalPedidos; i++) {
        if (PesoDelPedido[i] >= 50 && PesoDelPedido[i] <= 100) {
            contador++;
        }
    }

    if (totalPedidos == 0) return 0;

    return (contador * 100.0) / totalPedidos;
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

float costototalcordoba (float CostoDelPedido[], string ProvinciaDestino[], int j){
    float costototal=0;
    for (int i = 0; i < j; i++) {
        if ( ProvinciaDestino[i]=="cordoba") {
            costototal+=CostoDelPedido[i];
        }
    }
    return costototal;
}

float porcentajepedidosraul (string Responsable[], int j){
    int contador=0;

    for(int i=0;i<j;i++){
        if(Responsable [i] == "raul"){
            contador++;
        }
    }
    return (contador*100.0) / j;
}

float porcentajePeso90a120(float pesodelpedido[], int totalPedidos) {
    int contador = 0;

    for (int i = 0; i < totalPedidos; i++) {
        if (pesodelpedido[i] >= 90 && pesodelpedido[i] <= 120) {
            contador++;
        }
    }

    if (totalPedidos == 0) return 0;

    return (contador * 100.0) / totalPedidos;
}

float Pedidosmenores50Kg(float pesodelpedido[], int totalPedidos) {
    int contador = 0;
   
    for (int i = 0; i < totalPedidos; i++) {
        if (pesodelpedido[i] < 50 ) {
            contador++;
        }
    }
    return contador;
}


float porcentajepedidosentre200y500kilos (float PesoDelPedido[], int j ){
    int contador=0;

    
    for(int i=0;i<j;i++){

        
        if (PesoDelPedido[i]<=500 && PesoDelPedido[i]>=200){
            contador++;

        }

    }
    return (contador *100)/j;


}



float pedidosquenosonderaul ( string Responsable[], float CostoDelPedido[], int j){
float sumafacturada=0;
    
    for(int i=0; i<j;i++){
        
        if (Responsable[i] != "Raul"){
            sumafacturada+= CostoDelPedido[i];
        }


    }

    return sumafacturada;
}


int dnipedidocostosoushuaia (int DNIResponsable[], float CostoDelPedido[], string ProvinciaDestino[], int j ){
    float pedidomasgrande=0;
    int dniushuaia;
    
    for (int i=0;i<j;i++){
        
        if(ProvinciaDestino[i]=="ushuaia"){
            if (CostoDelPedido[i]>pedidomasgrande)
            {
                pedidomasgrande=CostoDelPedido[i];
                dniushuaia= DNIResponsable[i];
            }
            
        }

    }

return dniushuaia;
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

    float porcentaje = porcentajePedidosPesoMedio(PesoDelPedido, j);
    cout << "El porcentaje de pedidos entre 50 y 100 kg es: " << porcentaje << "%" << endl;
    
    cout<<"El DNI del responsable que facturo el pedido mas pesado es: "<<DNIpedidoPesado(DNIResponsable, PesoDelPedido, j)<<endl;

    cout<<"El pedido mas liviano en Jujuy es de: "<<PedidomenosPesadoJujuy(j, Responsable, PesoDelPedido, ProvinciaDestino)<<endl;

    cout<<"El DNI del responsable que facturo el pedido con codigo 0012655 es: "<<dnidelcodigo(DNIResponsable, CodigoDePedido, j)<<endl;

    cout<<"El costo total de los pedidos que llegaron a la provincia de Cordoba es: "<<costototalcordoba (CostoDelPedido, ProvinciaDestino, j)<<endl;

    cout<<"El porcentaje de pedidos facrurados por Raul es: "<< porcentajepedidosraul (Responsable, j)<< "%" <<endl;

    cout<<"El porcentaje de pedidos que pesan entre 90 y 120 kilos es: "<<porcentajePeso90a120(PesoDelPedido, j)<<"%"<<endl;

    cout<<"La cantidad de pedidos menorea a 50 kilos es: "<<Pedidosmenores50Kg(PesoDelPedido, j)<<endl;

    cout<<"El porcentaje de pedidos entre 200 y 500 kilos es: "<<porcentajepedidosentre200y500kilos (PesoDelPedido,j)<<endl;

    cout<<"Total facturado por pedidos cuyo responsable no sea Raul: "<<pedidosquenosonderaul (Responsable, CostoDelPedido, j)<<endl;

    cout<<"DNI del responsable con el pedido mas costoso dentro de la provincia de Ushuaia: " << dnipedidocostosoushuaia (DNIResponsable, CostoDelPedido, ProvinciaDestino,  j )<<endl;
}