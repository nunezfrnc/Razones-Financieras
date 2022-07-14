
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

string Admission() {

    hola:

    string userinput; // this is the user's guess
    string password = "212197"; // this is the actual password
    cout<<"\nIngresa la contraseña: ";cin>>userinput;

    if (userinput != password)
    {
        cout << "Contraseña incorrecta... Intentalo de nuevo: ";
        cin >> userinput;

        while (userinput != password)
            goto hola;

    } else
        cout << "Contraseña aceptada... "<<endl;
    return "\n\nBienvenido";
}
double Porcentaje(double num1, double num2){

    double res;
    res = ((num1 / num2)*100);
    return res;
}
double Division(double x, double y){
    double res;
    res = x/y;
    return res;
}



int main() {

    string nombre;
    cout<<"Ingresa tu nombre: ";cin>>nombre;
    cout<<"Hola "+nombre+" ten un lindo dia"<<endl;

    cout<< Admission()<<endl;


    int año = 365;
    int Seleccion;
    string input, Empresa, Evaluacion;


    double ACP, ALP, PCP, PLP, AT, PT, CC;/*
     * ACP - Activo a corto plazo
     * ALP - Activo a largo plazo
     * PCP - Pasivo a corto plazo
     * PLP - Pasivo a largo plazo
     * AT - Activo total
     * PT - Pasivo total
     * CC - Capital contable
     *///Cuentas de Estado de Situacion Financiera
    double Inv, CV, CPC, CPP, V, UO, GPI, UN, NA;/*
 * Inv - Inventarios
 * CV - Costo de ventas
 * CPC - Cuentas por cobrar
 * CPP - Cuentas por pagar
 * V - Ventas
 * UO - Utilidad de operacion
 * GPI - Gastos por intereses
 * UN - Utilidad neta
 * NA - Numero de acciones
 */
    double CTN, RC, PA;/*
 * CTN - Capital de trabajo neto
 * RC - Razon circulante
 * PA - Prueba de acido
 *///Razones de liquidez
    double RI,PPI, RCC, PRCC, RCP, PPCP, RTA, IUAT;/*
 * RI - Rotacion de inventarios
 * PPI - Periodo de permanencia de los inventarios
 * RCC - Rotacion cuentas por cobrar
 * PRCC - Periodo de recuperacion de cuentas por cobrar
 * RCP - Rotacion cuentas por pagar
 * PPCP - Periodo de pago de cuentas por pagar
 * RTA - Rotacion de activos totales
 * IUAT - Intensidad de uso de activos totales
 *///Razones de rotacion de activos y uso de activos
    double PTCC, MC, PLPCC, CI;/*
 * PTCC - Pasivo total a capital contable
 * MC - Multiplicador del capital
 * PLPCC - Pasivo a largo plazo a capital contable
 * CI - Cobertura de interes
 */ //Razones de apalancamiento
    double ROS, ROA, ROE, UPA;/*
 * ROS - Rendimiento sobre las ventas
 * ROA - Rendimiento sobre activos totales
 * ROE - Rendimiento sobre el capital contable
 * UPA - Utilidad por accion
 *///Razones de rentabilidad


    inicio:

    cout<<"\nEste programa fue hecho para calcular Razones Financieras"<<endl;


    cout<<"\n1. Razones de Liquidez."<<endl;
    cout<<"2. Razones de rotacion de activos y uso de activos."<<endl;
    cout<<"3. Razones de apalancamiento."<<endl;
    cout<<"4. Razones de rentabilidad."<<endl;

    cout<<"\nCual es el nombre de la empresa que esta evaluando: ";cin>>Empresa;
    cout<<"Que año financiero de la compañia esta evaluando? ";cin>>Evaluacion;

    escojer:
    cout<<"\nEscoja el tipo de razon financiera que quiera calcular: ";cin>>Seleccion;




    switch(Seleccion){

        case 1:

            cout<<"\n\n\n\n¡Estas realizando calculos para razones de Liquidez!    PROCEDE CON PRECAUCION"<<endl;

            cout<<"\nCuentas del Estado de Situacion Financiera";
            //Activos
            cout<<"\nDigite el activo circulante: ";cin>>ACP;
            //Pasivos
            cout<<"Digite el pasivo circulante: ";cin>>PCP;
            cout<<"Digite el valor de las cuentas por cobrar: ";cin>>CPC;
            cout<<"Digite el valor de los inventarios: ";cin>>Inv;


            cout<<"\n_________________________________";cout<<"\nRazones de Liquidez de la empresa: "<<Empresa<<". Estados financieros del año "<<Evaluacion<<endl;
            //Razones de Liquidez funciones
            //CTN, RC, PA
            CTN = (ACP - PCP); RC = Division(ACP,PCP); PA = (ACP - Inv) / PCP;

            cout<<"\nEl capital de trabajo neto es: "<<CTN<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"La razon circulante es: "<<RC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El valor de la prueba de acido arroja: "<<PA<<setiosflags(ios::fixed)<<setprecision(6)<<endl;

            cout<<"\nInformacion condensada: "<<endl;
            cout<<CTN<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<RC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<PA<<setiosflags(ios::fixed)<<setprecision(6)<<endl;

            cout<<"\n\nAnalisis completo.";
            break;


        case 2:

            cout<<"\n¡Estas realizando calculos para razones rotacion de activos y uso de activos!    PROCEDE CON PRECAUCION"<<endl;

            cout<<"\nCuentas del Estado de Situacion Financiera";
            cout<<"\nDigite el activo total: ";cin>>AT;
            cout<<"Digite el valor de las cuentas por cobrar: ";cin>>CPC;
            cout<<"Digite el valor de los inventarios: ";cin>>Inv;
            cout<<"Digite el valor de las cuentas por pagar: ";cin>>CPP;
            cout<<"Digite el valor del capital contable: ";cin>>CC;
            cout<<"\nCuentas del Estado de Resultados"<<endl;
            cout<<"\nDigite el valor de las ventas netas: ";cin>>V;
            cout<<"Digite el costo de ventas: ";cin>>CV;
            cout<<"Digite la utilidad de operacion: ";cin>>UO;
            cout<<"Digite la utilidad neta: ";cin>>UN;

            cout<<"\n_________________________________";cout<<"\nRazones de rotacion de activos y uso de activos de la empresa: "<<Empresa<<". Estados financieros del año "<<Evaluacion<<endl;
            //Razones de rotacion de activos y uso de los activos
            //RI,PPI, RCC, PRCC, RCP, PPCP, RTA, IUAT
            RI = (CV / Inv); PPI = (año / RI); RCC = (V / CPC);
            PRCC = Division(año, RCC); RCP = (CV / CPP); PPCP = Division(año, RCP);
            RTA = Division(V, AT); IUAT = Division(AT, V);

            cout<<"\nLa rotacion de inventarios es: "<<RI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El periodo de permanencia de los inventarios es: "<<PPI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"La rotacion de las cuentas por cobrar es: "<<RCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El periodo de recuperacion de las cuentas por cobrar: "<<PRCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"Rotacion de cuentas por pagar: "<<RCP<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El periodo de pago de las cuentas por pagar es: "<<PPCP<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"La rotacion de los activos totales de la empresa es: "<<RTA<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"La intensidad del uso de los activos es: "<<IUAT<<setiosflags(ios::fixed)<<setprecision(6)<<endl;

            cout<<"\nInformacion condensada: "<<endl;
            cout<<RI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<PPI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<RCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<PRCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<RCP<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<PPCP<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<RTA<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<IUAT<<setiosflags(ios::fixed)<<setprecision(6)<<endl;


            cout<<"\n\nAnalisis completo.";
            break;

        case 3:

            cout<<"\n¡Estas realizando calculos para razones de apalancamiento!    PROCEDE CON PRECAUCION"<<endl;

            cout<<"Cuentas del Estado de Situacion Financiera"<<endl;
            //Activos
            cout<<"\nDigite el activo total: ";cin>>AT;
            //Pasivos
            cout<<"Digite el pasivo a largo plazo: ";cin>>PLP;
            cout<<"Digite el pasivo total: ";cin>>PT;
            //Capital contable
            cout<<"Digite el total capital contable: ";cin>>CC;
            cout<<"Cuentas del Estado de Resultado"<<endl;
            cout<<"Digite la utilidad de operacion: ";cin>>UO;
            cout<<"Digite los gastos por intereses(a cargo): ";cin>>GPI;



            cout<<"\n_________________________________";cout<<"\nRazones de apalancamiento de la empresa: "<<Empresa<<". Estados financieros del año "<<Evaluacion<<endl;
            //Razones de apalancamiento
            //PTCC, MC, PLPCC, CI
            PTCC = Division(PT, CC); MC = Division(AT, CC); PLPCC= Division(PLP, CC); CI= Division(UO, GPI);

            cout<<"\nEl pasivo total a capital contable es de: "<<PTCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El multiplicador de capital es: "<<MC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"El pasivo a largo plazo a capital contable es: "<<PLPCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<"La cobertura de intereses es: "<<CI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;

            cout<<"\nInformacion condensada: "<<endl;
            cout<<PTCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<MC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<PLPCC<<setiosflags(ios::fixed)<<setprecision(6)<<endl;
            cout<<CI<<setiosflags(ios::fixed)<<setprecision(6)<<endl;

            cout<<"\n\nAnalisis completo.";
            break;


        case 4:

            cout<<"\n¡Estas realizando calculos para razones de rentabilidad!    PROCEDE CON PRECAUCION"<<endl;

            cout<<"\nCuentas del Estado de Situacion Financiera";
            //Activos
            cout<<"\nDigite el activo total: ";cin>>AT;
            //Capital contable
            cout<<"\nDigite el total de acciones circulantes: ";cin>>NA;
            cout<<"Digite el total capital contable: ";cin>>CC;

            //Uso de cuentas del estado de resultados
            cout<<"\nCuentas del Estado de Resultados"<<endl;
            cout<<"Digite las ventas netas: ";cin>>V;
            cout<<"Digite la utilidad neta: ";cin>>UN;

            cout<<"\n_________________________________";cout<<"\nRazones de rentabilidad de la empresa: "<<Empresa<<". Estados financieros del año "<<Evaluacion<<endl;
            //Razones de rentabilidad
            //ROS, ROA, ROE, UPA
            ROS = Porcentaje(UN, V);
            ROA = Porcentaje(UN, AT);
            ROE = Porcentaje(UN, CC);
            UPA = Porcentaje(UN, NA);

            cout<<"\nEl rendimiento sobre las ventas(ROS) es de: "<<ROS<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<"El rendimiento sobre los activos totales(ROA) es de: "<<ROA<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<"El rendimiento sobre el capital contable(ROE) es de: "<<ROE<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<"La utilidad por accion(UPA) es de: "<<UPA<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;

            cout<<"\nInformacion condensada: "<<endl;
            cout<<ROS<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<ROA<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<ROE<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;
            cout<<UPA<<setiosflags(ios::fixed)<<setprecision(6)<<"%"<<endl;

            cout<<"\n\nAnalisis completo.";
            break;

    }

    cout<<"\n\nQuieres inicializar el programa de nuevo? (Y?) \n";cin>>input;
    if(input == "y") goto escojer;
    else {
        cout << "Estas seguro que quieres salir del programa? (S/N?) \n";
        cin >> input;
        if (input == "n") goto inicio;
        else exit;
    }

/* if((Seleccion>1)&&(Seleccion<4)) {

        cout<<"Porfavor elija un numero valido dentro de los parametros mostrados por el programa"<<endl;

    }else if(Seleccion=1){

        cout<<"\nCuentas del Estado de Situacion Financiera";
        //Activos
        cout<<"\nDigite el activo a corto plazo: ";cin>>ACP;
        cout<<"Digite el valor de las cuentas por cobrar: ";cin>>CPC;
        cout<<"Digite el valor de los inventarios: ";cin>>Inv;


        cout<<"\n_________________________________";cout<<"\nRazones de Liquidez"<<endl;
        //Razones de Liquidez funciones
        //CTN, RC, PA
        CTN = ACP - PCP; RC = Division(ACP,PCP); PA = (ACP - Inv) / PCP;

        cout<<"\nEl capital de trabajo neto es: "<<CTN<<endl;
        cout<<"La razon circulante es: "<<RC<<endl;
        cout<<"El valor de la prueba de acido arroja: "<<PA<<endl;

        cout<<"\n\nAnalisis completo.";

    } else if (Seleccion = 2){

        cout<<"Cuentas del Estado de Situacion Financiera";
        cout<<"\nDigite el activo total: ";cin>>AT;
        cout<<"\nCuentas del Estado de Resultados"<<endl;
        cout<<"\nDigite el costo de ventas: ";cin>>CV;
        cout<<"Digite el valor de las ventas realizadas: ";cin>>V;
        cout<<"Digite la utilidad de operacion: ";cin>>UO;
        cout<<"Digite la utilidad neta: ";cin>>UN;

        cout<<"\n_________________________________";cout<<"\nRazones de rotacion de activos y uso de activos"<<endl;
        //Razones de rotacion de activos y uso de los activos
        //RI,PPI, RCC, PRCC, RCP, PPCP, RTA, IUAT
        RI = Division(CV, Inv); PPI = Division(año, RI); RCC = Division(V, CC);
        PRCC = Division(año, RCC); RCP = Division(CV, CPP); PPCP = Division(año, RCP);
        RTA = Division(V, AT); IUAT = Division(AT, V);

        cout<<"\nLa rotacion de inventarios es: "<<RI<<endl;
        cout<<"El periodo de permanencia de los inventarios es: "<<PPI<<endl;
        cout<<"La rotacion de las cuentas por cobrar es: "<<RCC<<endl;
        cout<<"El periodo de recuperacion de las cuentas por cobrar: "<<PRCC<<endl;
        cout<<"Rotacion de cuentas por pagar: "<<RCP<<endl;
        cout<<"El periodo de pago de las cuentas por pagar es: "<<PPCP<<endl;
        cout<<"La rotacion de los activos totales de la empresa es: "<<RTA<<endl;
        cout<<"El valor de la prueba de acido arroja: "<<IUAT<<endl;


        cout<<"\n\nAnalisis completo.";

    } else if (Seleccion = 3){

        cout<<"Cuentas del Estado de Situacion Financiera"<<endl;
        //Activos
        cout<<"\nDigite el activo total: ";cin>>AT;
        //Pasivos
        cout<<"Digite el pasivo a largo plazo: ";cin>>PLP;
        cout<<"Digite el pasivo total: ";cin>>PT;
        //Capital contable
        cout<<"Digite el total capital contable: ";cin>>CC;


        cout<<"\n_________________________________";cout<<"\nRazones de apalancamiento"<<endl;
        //Razones de apalancamiento
        //PTCC, MC, PLPCC, CI
        PTCC = Division(PT, CC); MC = Division(AT, CC); PLPCC= Division(PLP, CC); CI= Division(UO, GPI);

        cout<<"\nEl pasivo total a capital contable es de: "<<PTCC<<endl;
        cout<<"El multiplicador de capital es: "<<MC<<endl;
        cout<<"El pasivo a largo plazo a capital contable es: "<<PLPCC<<endl;
        cout<<"La cobertura de intereses es: "<<CI<<endl;

        cout<<"\n\nAnalisis completo.";

    } else if(Seleccion = 4) {

        cout<<"\nCuentas del Estado de Situacion Financiera";
        //Activos
        cout<<"\nDigite el activo total: ";cin>>AT;
        //Capital contable
        cout<<"\nDigite el numero de acciones que posee la empresa: ";cin>>NA;
        cout<<"Digite el total capital contable: ";cin>>CC;

        //Uso de cuentas del estado de resultados
        cout<<"\nCuentas del Estado de Resultados"<<endl;
        cout<<"\nDigite la utilidad neta: ";cin>>UN;

        cout<<"\n_________________________________";cout<<"\nRazones de rentabilidad"<<endl;
        //Razones de rentabilidad
        //ROS, ROA, ROE, UPA
        ROS = Division(UN, V); ROA = Division(UN, AT); ROE = Division(UN, CC); UPA = Division(UN, NA);

        cout<<"\nEl rendimiento sobre las ventas(ROS) es de: "<<ROS<<endl;
        cout<<"El rendimiento sobre los activos totales(ROA) es de: "<<ROA<<endl;
        cout<<"El rendimiento sobre el capital contable(ROE) es de: "<<ROE<<endl;
        cout<<"La utilidad por accion(UPA) es de: "<<UPA<<endl;


        cout<<"\n\nAnalisis completo.";

    } else{
        cout<<"Porfavor elija un numero valido dentro de los parametros mostrados por el programa"<<endl;
    }*/
/*
    //Programa principal, entrada de datos
    cout<<"Este programa fue hecho para calcular Razones Financieras"<<endl;

    cout<<"\nCuentas del Estado de Situacion Financiera";
    //Activos
    cout<<"\nDigite el activo a corto plazo: ";cin>>ACP;
    cout<<"Digite el valor de las cuentas por cobrar: ";cin>>CPC;
    cout<<"Digite el valor de los inventarios: ";cin>>Inv;
    cout<<"Digite el activo a largo plazo: ";cin>>ALP;
    cout<<"Digite el activo total: ";cin>>AT;

    //Pasivos
    cout<<"\nDigite el pasivo a corto plazo: ";cin>>PCP;
    cout<<"Digite el pasivo a largo plazo: ";cin>>PLP;
    cout<<"Digite el pasivo total: ";cin>>PT;

    //Capital contable
    cout<<"\nDigite el numero de acciones que posee la empresa: ";cin>>NA;
    cout<<"Digite el total capital contable: ";cin>>CC;

    //Uso de cuentas del estado de resultados
    cout<<"\nCuentas del Estado de Resultados"<<endl;
    cout<<"\nDigite el costo de ventas: ";cin>>CV;
    cout<<"Digite el valor de las ventas realizadas: ";cin>>V;
    cout<<"Digite la utilidad de operacion: ";cin>>UO;
    cout<<"Digite la utilidad neta: ";cin>>UN;


    cout<<"\n_________________________________";cout<<"\nRazones de Liquidez"<<endl;
    //Razones de Liquidez funciones
    //CTN, RC, PA
    CTN = ACP - PCP; RC = Division(ACP,PCP); PA = (ACP - Inv) / PCP;

    cout<<"\nEl capital de trabajo neto es: "<<CTN<<endl;
    cout<<"La razon circulante es: "<<RC<<endl;
    cout<<"El valor de la prueba de acido arroja: "<<PA<<endl;

    cout<<"\n_________________________________";cout<<"\nRazones de rotacion de activos y uso de activos"<<endl;
    //Razones de rotacion de activos y uso de los activos
    //RI,PPI, RCC, PRCC, RCP, PPCP, RTA, IUAT
    RI = Division(CV, Inv); PPI = Division(año, RI); RCC = Division(V, CC);
    PRCC = Division(año, RCC); RCP = Division(CV, CPP); PPCP = Division(año, RCP);
    RTA = Division(V, AT); IUAT = Division(AT, V);

    cout<<"\nLa rotacion de inventarios es: "<<RI<<endl;
    cout<<"El periodo de permanencia de los inventarios es: "<<PPI<<endl;
    cout<<"La rotacion de las cuentas por cobrar es: "<<RCC<<endl;
    cout<<"El periodo de recuperacion de las cuentas por cobrar: "<<PRCC<<endl;
    cout<<"Rotacion de cuentas por pagar: "<<RCP<<endl;
    cout<<"El periodo de pago de las cuentas por pagar es: "<<PPCP<<endl;
    cout<<"La rotacion de los activos totales de la empresa es: "<<RTA<<endl;
    cout<<"El valor de la prueba de acido arroja: "<<IUAT<<endl;


    cout<<"\n_________________________________";cout<<"\nRazones de apalancamiento"<<endl;
    //Razones de apalancamiento
    //PTCC, MC, PLPCC, CI
    PTCC = Division(PT, CC); MC = Division(AT, CC); PLPCC= Division(PLP, CC); CI= Division(UO, GPI);

    cout<<"\nEl pasivo total a capital contable es de: "<<PTCC<<endl;
    cout<<"El multiplicador de capital es: "<<MC<<endl;
    cout<<"El pasivo a largo plazo a capital contable es: "<<PLPCC<<endl;
    cout<<"La cobertura de intereses es: "<<CI<<endl;

    cout<<"\n_________________________________";cout<<"\nRazones de rentabilidad"<<endl;
    //Razones de rentabilidad
    //ROS, ROA, ROE, UPA
    ROS = Division(UN, V); ROA = Division(UN, AT); ROE = Division(UN, CC); UPA = Division(UN, NA);

    cout<<"\nEl rendimiento sobre las ventas(ROS) es de: "<<ROS<<endl;
    cout<<"El rendimiento sobre los activos totales(ROA) es de: "<<ROA<<endl;
    cout<<"El rendimiento sobre el capital contable(ROE) es de: "<<ROE<<endl;
    cout<<"La utilidad por accion(UPA) es de: "<<UPA<<endl;

    */
    return 0;
}
