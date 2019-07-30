#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fd;

struct Detalleaccesor
{
    char tipo[20];
    int codigo;
    float precacce;
} detaccesor[5];

struct Accesorio
{
    int carg,cov,prot,audif,bat;

};
typedef struct Accesorio acce;
struct Movil
{
    char nombre[20];
    char tipo[20];
    float precvent;
    float precacce;
    acce accesor[5];
} mov[1000];

void menu();
void agregarmovil();
void agregaraccesorio();
void elimimovil();
void accesorionece();
void accesorioneces();
void visualizar();

int carg = 0, cov = 0, prot = 0, audif = 0, bat = 0;
int ttcarg = 0, ttcov = 0, ttprot = 0, ttaudif = 0, ttbat = 0;
int i = 0, pedido = 0;
int cant[1000];
int main()
{
    menu();
    return 0;
}

void menu()
{

    int select1,select2;
    char salir = 'n';

    do
    {
        printf("\t\n*M E N U   P R I N C I P A L*\n\n");
        printf(" 1.AGREGAR\n 2.ELIMINAR\n 3.VISUALIZAR\n 4.SALIR\n SELECCIONE UNA OPCION: ");
        scanf("%d",&select1);
        system ("cls");

        switch (select1)
        {
        case 1:
            printf("\n--M E N U    A G R E G A R--\n");
            printf(" 1.AGREGAR Movil\n 2.AGREGAR Accesorio\n");
            printf("OPCION: ");
            scanf("%i",&select2);
            system ("cls");
            switch (select2)
            {
            case 1:
                agregarmovil();
                break;
            case 2:
                agregaraccesorio();
                break;
            default:
                printf("Opcion invalida. Por favor elija una de las opciones mostradas");
                break;
            }

            break;

        case 2:
            elimimovil();

            break;

        case 3:
            printf("\n\t==Visualizar==\n");
            printf("1.Visualizar Cantidad de Accesorios Necesarios\n");
            printf("OPCION: ");
            scanf("%d",&select2);
            system ("cls");

            switch(select2)
            {
            case 1:
                accesorionece();
                break;

            default:
                printf("Opcion invalida. Por favor elija una de las opciones mostradas");
                break;
            }
            break;

        case 4:
            fflush(stdin);
            printf("DESEA SALIR DEL PROGRAMA (S/N)?:");
            scanf("%c",&salir);
            break;

        default:
            printf("\nOpcion invalida. Por favor elija una de las opciones mostradas\n");
            break;
        }

    }
    while(salir == 'n' || salir == 'N');
}

void agregarmovil()
{

    int C=0,CO=0,P=0,A=0,B=0;
    char rpt = 's';

    printf("\n\t--Agregar Movil--\n");

    do
    {
        fflush(stdin);
        printf("\nDigite nombre del Movil: ");
        scanf("%s",&mov[i].nombre);
        printf("\nDigite  tipo del Movil: ");
        scanf("%s",&mov[i].tipo);
        printf("\nDigite precio de costo: ");
        scanf("%f",&mov[i].precacce);
        printf("\nDigite precio de venta: ");
        scanf("%f",&mov[i].precvent);
        printf("Cuales accesorios desea para el Movil?\n");
        printf("(Presione 1 para los Accesorios utilizados, presione 0 para los Accesorios no utilizados)\n");
        printf("Cargador\n");
        scanf("%i",&C);
        printf("Cover\n");
        scanf("%i",&CO);
        printf("Protector\n");
        scanf("%i",&P);
        printf("Audifono\n");
        scanf("%i",&A);
        printf("Bateria\n");
        scanf("%i",&B);
        i++;

        if(C>=1)
        {
            carg++;
        }
        if(CO>=1)
        {
            cov++;
        }
        if(P>=1)
        {
            prot++;
        }
        if(A>=1)
        {
            audif++;
        }
        if(B>=1)
        {
            bat++;
        }
        mov[i].accesor[0].carg = C;
        mov[i].accesor[1].cov = CO;
        mov[i].accesor[2].prot = P;
        mov[i].accesor[3].audif = A;
        mov[i].accesor[4].bat = B;


        printf("Desea agregar otro Movil (S/N)? \n");
        scanf("%s",&rpt);
    }
    while(rpt == 's'    || rpt == 'S');

}
void agregaraccesorio()
{

    char rpt = 's';
    int m = 0, select;

    printf("\n\t--Agregar Accesorio--\n");

    do
    {
        fflush(stdin);
        printf("Diga el tipo de Accesorio: ");
        printf("\n 1.Cargador\n 2.Cover\n 3.Protector\n 4.Audifono\n 5.Bateria\n");
        scanf("%i",&select);
        switch(select)
        {
        case 1:
            strcpy(detaccesor[0].tipo,"Cargador");
            printf("1. agregar codigo a Accesorio: ");
            scanf("%i",&detaccesor[0].codigo);
            printf("2. Introduzca el precio de compra: ");
            scanf("%f",&detaccesor[0].precacce);;
            break;
        case 2:
            strcpy(detaccesor[1].tipo,"Cover");
            printf("1. agregar codigo a Accesorio: ");
            scanf("%i",&detaccesor[1].codigo);
            printf("2. Introduzca el precio de compra: ");
            scanf("%f",&detaccesor[1].precacce);
            break;
        case 3:
            strcpy(detaccesor[2].tipo,"Protector");
            printf("1. agregar codigo a Accesorio: ");
            scanf("%i",&detaccesor[2].codigo);
            printf("2. Introduzca el precio de compra: ");
            scanf("%f",&detaccesor[2].precacce);
            break;
        case 4:
            strcpy(detaccesor[3].tipo,"Audifono");
            printf("1. agregar codigo a Accesorio: ");
            scanf("%i",&detaccesor[3].codigo);
            printf("2. Introduzca el precio de compra: ");
            scanf("%f",&detaccesor[3].precacce);
            break;
        case 5:
            strcpy(detaccesor[4].tipo,"Bateria");
            printf("1. agregar codigo a Accesorio: ");
            scanf("%i",&detaccesor[4].codigo);
            printf("2. Introduzca el precio de compra: ");
            scanf("%f",&detaccesor[4].precacce);
            break;
        default:
            printf("Opcion invalida. Por favor elija una de las opciones mostradas");
            break;
        }
        fflush(stdin);

        m++;

        printf("Desea agregar otro Accesorio (S/N)? \n");
        scanf("%s",&rpt);

    }

    while(rpt == 's'   || rpt== 'S');
}


void elimimovil()
{

    int j;
    char rpt = 's';

    printf("\n\t--Eliminar--\n");

    do
    {
        printf("Elija el Movil a eliminar:");
        for(j=0; j<i; j++)
        {
            printf("\n%i. %s\n",j,mov[j].nombre);
        }
        scanf("%i",&j);

        strcpy(mov[j].nombre," ");
        strcpy(mov[j].tipo," ");
        mov[j].precacce = 0;
        mov[j].precvent = 0;

        printf("Desea eliminar otro Movil (S/N)?");
        scanf("%s",&rpt);
        system ("cls");
    }
    while(rpt == 's');
}

void accesorionece()
{

    int carga = 1;
    int cove = 1;
    int prote = 1;
    int audifo = 1;
    int bate = 1;
    int j;
    int n=0;

    for(j=0; j<i; j++)
    {
        if(mov[j].accesor[0].carg==1)
        {
            carga*=cant[n];
            ttcarg+=carga;
        }
        if(mov[j].accesor[1].cov==1)
        {
            cove*=cant[n];
            ttcov+=cove;
        }
        if(mov[j].accesor[2].prot==1)
        {
            prote*=cant[n];
            ttcov+=prot;
        }
        if(mov[j].accesor[3].audif==1)
        {
            audifo*=cant[n];
            ttaudif+=audifo;
        }
        if(mov[j].accesor[4].bat==1)
        {
            bate*=cant[n];
            ttbat+=bate;
        }
        n++;
    }
    accesorioneces();

}

void accesorioneces()
{

    char direccion[] = "C:archivo.txt";

    int j;

    printf("\n*Favor de ir al documento archivo*\n");

    fd = fopen(direccion,"wt+");

    if(fd == NULL)
    {
        printf("Error al tratar de crear el archivo");
        return 1;
    }

    printf("\n.:Creando registro de Accesorios:.");
    fprintf(fd,"\tRegistro de Accesorios Necesarios");


    for(j=0; j<5; j++)
    {
        fflush(stdin);


        fprintf(fd,"\n\nCodigo: ");
        fprintf(fd,"%i",detaccesor[j].codigo);
        fprintf(fd,"\ntipo: ");
        fwrite(detaccesor[j].tipo,1,strlen(detaccesor[i].tipo),fd);
        fprintf(fd,"\nCantidad: ");
        if(j==0)
        {
            fprintf(fd,"%i",ttcarg);
        }
        else if(j==1)
        {
            fprintf(fd,"%i",ttcov);
        }
        else if(j==2)
        {
            fprintf(fd,"%i",ttprot);
        }
        else if(j==3)
        {
            fprintf(fd,"%i",ttaudif);
        }
        else if(j==4)
        {
            fprintf(fd,"%i",ttbat);
        }

    }

    fclose(fd);
}

void visualizar()
{
    int c;
    char direccion[] = "C:archivo";

    fd = fopen(direccion,"r");

    if(fd == NULL)
    {
        printf("Error al tratar de leer el archivo");
        return 1;
    }
    printf("\n\t.:Visualizando Accesorios:.\n\n");

    while((c=fgetc(fd))!=EOF)
    {
        if(c == '\n')
        {
            printf("\n");
        }
        else
        {
            putchar(c);
        }
    }

    printf("\n\n");

}
