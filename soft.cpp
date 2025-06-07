#include <iostream>
using namespace std;

void ProvinciaMaspedidos(int J, string Provincia[]){
    int bsas=0, cor=0, Juj=0, SDE=0, Sal=0, i;

    for(i=0; i < J; i++){
        if(Provincia[i]=="BuenosAires" || Provincia[i]=="buenosaires")
        {bsas++;}

        if(Provincia[i]=="Cordoba" || Provincia[i]=="cordoba")
        {cor++;}

        if(Provincia[i]=="Jujuy" || Provincia[i]=="jujuy")
        {Juj++;}

        if(Provincia[i]=="SantiagoDelEstero" || Provincia[i]=="santiagodelestero")
        {SDE++;}

        if(Provincia[i]=="Salta" || Provincia[i]=="salta")
        {Sal++;}

    }
    
    if(bsas>cor || bsas==cor){if(bsas>Juj || bsas==Juj){if(bsas>SDE || bsas==SDE){if(bsas>Sal || bsas==Sal){ cout<< "Buenos Aires ";}}}}

    if(cor>bsas || cor==bsas){if(cor>Juj || cor==Juj){if(cor>SDE || cor==SDE){if(cor>Sal || cor==Sal){ cout<< "Cordoba ";}}}}

    if(Juj>bsas || Juj==bsas){if(Juj>cor || Juj==cor){if(Juj>SDE || Juj==SDE){if(Juj>Sal || Juj==Sal){ cout<< "Jujuy ";}}}}

    if(SDE>bsas || SDE==bsas){if(SDE>cor || SDE==cor){if(SDE>Juj || SDE==Juj){if(SDE>Sal || SDE==Sal){ cout<< "Santiago Del Estero ";}}}}

    if(Sal>bsas || Sal==bsas){if(Sal>cor || Sal==cor){if(Sal>SDE || Sal==SDE){if(Sal>Juj || Sal==Juj){ cout<< "Salta ";}}}}
}

void PedidosNombreDeCarlos(string responsable[100], int J) {
    int cont = 0;

    for (int i = 0; i < J; i++) {
        if (responsable[i] == "Carlos" || responsable[i] == "carlos") {
            if (cont > 0) {
                cout << ", ";
            }
            cout << "pedido " << i + 1;
            cont++;
        }
    }

    if (cont == 0) {
        cout << "ninguno";
    }

    cout << "." << endl;
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

int DNIpedidoPesado(int DNIdelResp[], float Pesopedido[], int  J){
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

string PedidomenosPesadoJujuy(int J, string responsable[], float peso[], string provdestino[]){
    float min=10000000;
    int i, valormin=-1;

    for(i=0; i<J; i++){
        if(provdestino[i]=="Jujuy"||provdestino[i]=="jujuy"){
            if(min>peso[i]){
                min=peso[i];
                valormin=i;
            }
        }

    }

    if (valormin>-1){
    return responsable[valormin];
    }else{
        return "No hay pedidos cuyo destino sea Jujuy";
    }
}

int dnidelcodigo(int Dni[], int codigo[], int J){
    int i, num=0;
    
    for(i=0; i < J; i++){
        if(codigo[i] == 0012655){
            num = J;
        }

    }
    return Dni[num];
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

int Pedidosmenores50Kg(float pesodelpedido[], int totalPedidos) {
    int contador = 0;
   
    for (int i = 0; i < totalPedidos; i++) {
        if (pesodelpedido[i] < 50 ) {
            contador++;
        }
    }
    return contador;
}

void CodigoCatamarca(int J, int Codigos[], float Peso[], string provinciadestino[]){
    int codeliv=-1, i;
    float min=100000000;

    for(i=0; i < J; i++){
        if(provinciadestino[i]=="Catamarca" || provinciadestino[i]=="catamarca"){
            if(Peso[i]<min){
                min=Peso[i];
                codeliv=i;
            }
        }
    }

    if(codeliv!=-1){
        cout<<Codigos[codeliv];
    }else{
        cout<<"No hay pedidos a Catamarca";
    }
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

float Totalfacturadopais(int J, float Costo[]){
    float cont=0;

    for(int i=0; i < J; i++){
        cont=cont+Costo[i];
    }
    return cont;
}

float pedidosquenosonderaul ( string Responsable[], float CostoDelPedido[], int j){
    float sumafacturada=0;
    
    for(int i=0; i<j;i++){
        
        if (Responsable[i] != "raul"){
            sumafacturada+= CostoDelPedido[i];
        }


    }

    return sumafacturada;
}

void dnipedidocostosoushuaia (int DNIResponsable[], float CostoDelPedido[], string ProvinciaDestino[], int j ){
    float pedidomasgrande=0;
    int dniushuaia=-1;
    
    for (int i=0;i<j;i++){
        
        if(ProvinciaDestino[i]=="ushuaia"){
            if (CostoDelPedido[i]>pedidomasgrande)
            {
                pedidomasgrande=CostoDelPedido[i];
                dniushuaia= i;
            }
            
        }

    }
    if(dniushuaia != -1){
        cout<<DNIResponsable[dniushuaia];
    }else{
        cout<< "No hay pedidos a Ushuaia";
    }
}

void OrdenarDNIresponsables(int  DNIResponsable[], int J) {
    int i, u, band, Aux;

    for (i = 0; i < J; i++) {

        band = 0;  

        while (band == 0) {
            band = 1;

            for (u = 0; u < J - 1; u++) {
                if (DNIResponsable[u] > DNIResponsable[u + 1]) {
                    Aux = DNIResponsable[u];
                    DNIResponsable[u] = DNIResponsable[u + 1];
                    DNIResponsable[u + 1] = Aux;
                    band = 0;
                }
            }
        }
    }

    for (i = 0; i < J; i++) {
        cout << DNIResponsable[i] << " ";
    }
    cout << endl;
}


int main(){
    int CodigoDePedido[100], DNIResponsable[100], i=0, j=0;
    float PesoDelPedido[100], CostoDelPedido[100];
    string ProvinciaDestino[100], Responsable[100], ProvinciaOrigen[100];


    while(i==0){

        cout<<"Ingrese la provincia en la que se fabrico el pedido "<<j+1<<" (Buenos Aires, Cordoba, Jujuy, Santiago del Estero o Salta) (poner el nombre todo junto y en minusculas, ej: Buenos Aires seria buenosaires)"<<endl;
        cin>>ProvinciaOrigen[j];


        cout<<"Ingrese el codigo del pedido "<<j+1<<endl;
        cin>>CodigoDePedido[j];

        cout<<"Ingrese el peso(en kilogramos) del pedido "<<j+1<<endl;
        cin>>PesoDelPedido[j];

        cout<<"Ingrese la provincia a la que debe llegar el pedido "<<j+1<<" (poner el nombre todo junto y en minusculas, ej: Buenos Aires seria buenosaires)"<<endl;
        cin>>ProvinciaDestino[j];

        cout<<"Ingrese el costo del pedido "<<j+1<<endl;
        cin>>CostoDelPedido[j];

        cout<<"Ingrese el responsable del pedido "<<j+1<<" (ingresar solo el nombre, en minusculas)"<<endl;
        cin>>Responsable[j];

        cout<<"Ingrese el DNI del responsable del pedido "<<j+1<<endl;
        cin>>DNIResponsable[j];

        j++;

        cout<<"Desea continuar cargando pedidos? (si=0/No=1)"<<endl;
        cin>>i;
        





    }
    
    cout<<"La provincia/s cuya fabrica recibe mas pedidos es/son: ";
    ProvinciaMaspedidos(j, ProvinciaOrigen);
    cout<<endl;

    cout<<"Los pedidos facturados a nombre de Carlos son: "<<endl;
    PedidosNombreDeCarlos(Responsable, j);

    float porcentaje = porcentajePedidosPesoMedio(PesoDelPedido, j);
    cout << "El porcentaje de pedidos entre 50 y 100 kg es: " << porcentaje << "%" << endl;
    
    cout<<"El DNI del responsable que facturo el pedido mas pesado es: "<<DNIpedidoPesado(DNIResponsable, PesoDelPedido, j)<<endl;

    cout<<"El pedido mas liviano en Jujuy es de: "<<PedidomenosPesadoJujuy(j, Responsable, PesoDelPedido, ProvinciaDestino)<<endl;

    cout<<"El DNI del responsable que facturo el pedido con codigo 0012655 es: "<<dnidelcodigo(DNIResponsable, CodigoDePedido, j)<<endl;

    cout<<"El costo total de los pedidos que llegaron a la provincia de Cordoba es: "<<costototalcordoba (CostoDelPedido, ProvinciaDestino, j)<<"$"<<endl;

    cout<<"El porcentaje de pedidos facrurados por Raul es: "<< porcentajepedidosraul (Responsable, j)<< "%" <<endl;

    cout<<"El porcentaje de pedidos que pesan entre 90 y 120 kilos es: "<<porcentajePeso90a120(PesoDelPedido, j)<<"%"<<endl;

    cout<<"La cantidad de pedidos menores a a 50 kilos es: "<<Pedidosmenores50Kg(PesoDelPedido, j)<<endl;

    cout<<"El codigo del pedido mas liviano que llego a la provincia de Catamarca es: ";
    CodigoCatamarca(j, CodigoDePedido, PesoDelPedido, ProvinciaDestino);
    cout<<endl;

    cout<<"El porcentaje de pedidos entre 200 y 500 kilos es: "<<porcentajepedidosentre200y500kilos (PesoDelPedido,j)<<"%"<<endl;

    cout<<"El dinero facturado por todas las provincias es: "<<Totalfacturadopais(j, CostoDelPedido)<<"$"<<endl;

    cout<<"Total facturado por pedidos cuyo responsable no sea Raul: "<<pedidosquenosonderaul (Responsable, CostoDelPedido, j)<<"$"<<endl;

    cout<<"DNI del responsable con el pedido mas costoso dentro de la provincia de Ushuaia: ";
    dnipedidocostosoushuaia (DNIResponsable, CostoDelPedido, ProvinciaDestino,  j );
    cout<<endl;

    cout<<"DNI de todos los responsables ordenados de menor a mayor: "<<endl;
    OrdenarDNIresponsables(DNIResponsable, j);
    cout<<endl;
}