#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--------------------------------------------------------------------------------------------------------------------*/
/*Randald Villegas Brenes*/
/*Laboratorio #1 de lenguajes de programacion*/
/*Lenguaje Imperativo*/

/*--------------------------------------------------------------------------------------------------------------------*/
/*Structs & typedefs*/
/*--------------------------------------------------------------------------------------------------------------------*/
typedef enum { EXENTO, CANASTA_BASICA, NORMALES } Impuesto;/*0%,1%,13%*/
typedef enum { BIENES, SERVICIOS } Tipo;
int id = 0;
/*--------------------------------------------------------------------------------------------------------------------*/
struct Bienes{/*1-n*/
    int id;
    char* nombre;
    double precio;
    double impuesto;
    struct Bienes* sig;
}*cabeza_bienes;
/*--------------------------------------------------------------------------------------------------------------------*/
struct Servicios{
    int id;
    char* descripcion;
    double precio;
    double impuesto;
};
/*--------------------------------------------------------------------------------------------------------------------*/
struct nodoFactura{
    int id;
    void* producto;
    Tipo tipo;
    double iva;
    struct nodoFactura* sig;
} *cabeza;





/*--------------------------------------------------------------------------------------------------------------------*/
void* nuevoBien(int id, char* nombre, double precio, Impuesto impuesto){
    struct Bienes* bienes;
    bienes = (struct Bienes*) malloc(sizeof(struct Bienes));
    bienes->id = id;
    bienes->nombre = nombre;
    bienes->precio = precio;


    if(impuesto == EXENTO){
        bienes->impuesto = 0;
    }else if(impuesto == CANASTA_BASICA){
        bienes->impuesto = 1;
    }else{
        bienes->impuesto = 13;
    }


    bienes->sig=NULL;
    if (cabeza_bienes == NULL)
        cabeza_bienes=bienes;
    else{
        bienes->sig = cabeza_bienes;
        cabeza_bienes = bienes;
    }

    return bienes;
}

/*--------------------------------------------------------------------------------------------------------------------*/
void* nuevoServicio(int id, char* descripcion, double precio, Impuesto impuesto){
    struct Servicios* servicios;
    servicios = (struct Servicios*) malloc(sizeof(struct Servicios));
    servicios->id = id;
    servicios->descripcion = descripcion;
    servicios->precio = precio;

    if(impuesto == EXENTO){
        servicios->impuesto = 0;
    }else if(impuesto == CANASTA_BASICA){
        servicios->impuesto = 1;
    }else{
        servicios->impuesto = 13;
    }


    return servicios;
}
/*--------------------------------------------------------------------------------------------------------------------*/
void insertarFactura(void* nuevaFactura, Tipo tipo, int id){
    struct nodoFactura* nn = NULL;
    nn = (struct nodoFactura*) malloc(sizeof(struct nodoFactura));
    nn->id = id;
    nn->producto=nuevaFactura;
    nn->tipo = tipo;
    nn->sig=NULL;
    if (cabeza == NULL)
        cabeza=nn;
    else{
        nn->sig = cabeza;
        cabeza = nn;
    }
}
/*--------------------------------------------------------------------------------------------------------------------*/
double largoFactura(){
    double i = 0.0;
    struct nodoFactura* temp=cabeza;
    if (cabeza!=NULL){
        do {
            i+=1;
            temp = temp->sig;
        }
        while(temp!=NULL);
    }
    return i;
}
/*--------------------------------------------------------------------------------------------------------------------*/
double largoBienes(){
    double i = 0.0;
    struct Bienes* temp=cabeza_bienes;
    if (cabeza_bienes!=NULL){
        do {
            i+=1;
            temp = temp->sig;
        }
        while(temp!=NULL);
    }
    return i;
}
/*--------------------------------------------------------------------------------------------------------------------*/
int getId(){
    id +=1 ;
    return id;
}

/*--------------------------------------------------------------------------------------------------------------------*/
void imprimir(){
    struct nodoFactura* act = cabeza;
    int id_loop = 0;
    double iva = 0.0;
    if (act == NULL) {
        printf("\n=>No existen Facturas\n");
        return;
    }else{
        printf("*********************************************************************************\n");
        printf("***************************Mostrando Facturas*************************************");
        while(act!=NULL){
            if (act->tipo==0){
                printf("\n--------------------------------------------");
                printf("\nBIENES");
                printf("\nID Factura: %d\n" , ((struct Bienes*)act->producto)->id);
                printf("\nNombre: %s\n" , ((struct Bienes*)act->producto)->nombre);
                printf("\nPrecio: %.2f\n" , ((struct Bienes*)act->producto)->precio);
                printf("\nImpuesto Aplicado: %.2f \n" , ((struct Bienes*)act->producto)->impuesto);
                double total = ((struct Bienes*)act->producto)->precio * (((struct Bienes*)act->producto)->impuesto/100);
                printf("\nIVA: %.2f \n" ,total);
                if(id_loop == ((struct Bienes*)act->producto)->id){
                    iva += total;
                }else{
                    iva = total;
                    act->iva = total;
                }
            }else {
                printf("\n--------------------------------------------");
                printf("\nSERVICIOS");
                printf("\nID Factura: %d\n" , ((struct Servicios*)act->producto)->id);
                printf("\nDescripcion: %s\n" , ((struct Servicios*)act->producto)->descripcion);
                printf("\nPrecio: %.2f\n" , ((struct Servicios*)act->producto)->precio);
                printf("\nImpuesto Aplicado: %.2f \n" , ((struct Servicios*)act->producto)->impuesto);
                double total = ((struct Servicios*)act->producto)->precio * (((struct Servicios*)act->producto)->impuesto/100);
                printf("\nIVA: %.2f \n" ,total);
            }
            act = act->sig;
        }
    }
}


/*--------------------------------------------------------------------------------------------------------------------*/
/*Application*/
int main() {
    int i1 = getId();
    int i2 = getId();
    int i3 = getId();
    int i4 = getId();
    int i5 = getId();
    insertarFactura(nuevoServicio(i1,"Pago de luz",1000.0, NORMALES), SERVICIOS, i1);
    insertarFactura(nuevoServicio(i2,"Pago de Agua",2000.0, EXENTO), SERVICIOS, i2);
    insertarFactura(nuevoServicio(i3,"Pago de Internet",5000.0, NORMALES), SERVICIOS, i3);
    insertarFactura(nuevoServicio(i4,"Pago de Cable",10000.0, EXENTO), SERVICIOS, i4);
    insertarFactura(nuevoServicio(i5,"Alimentacion",5000.0, NORMALES), SERVICIOS, i5);

    int id1 = getId();
    int id2 = getId();

    insertarFactura( nuevoBien(id1, "Carro",15000.0,NORMALES),BIENES, id1);
    insertarFactura( nuevoBien(id1, "Prestamo",12000.0,CANASTA_BASICA),BIENES, id1);
    insertarFactura(nuevoBien(id2, "Lote",7500.0,EXENTO),BIENES, id2);
    insertarFactura(nuevoBien(id2, "Moto",5000.0,CANASTA_BASICA),BIENES, id2);
    insertarFactura(nuevoBien(id2, "Casa",8000,NORMALES),BIENES, id2);
    imprimir();
    return 0;
}
