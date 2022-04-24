#include<stdio.h>
/*ground floor book finder*/
int main(){
    char book;
    int Strength_of_material = 1, material_science=2, Heat_and_mass_transfer=3, Thermodynamics=4, Thermal_Engg=5, Electrical_circuit_and_networks=6, Circuit_theory=7, Digital_system=8, Linear_system=9, Micro_electroics=10, Power_System=11, Electrical_Machines=12, Energy_and_Power_Plants=13;
    printf("CATOGRIES:-\n|**********************************|\n|                                  |\n|[1]Strength_of_material           |\n|[2]Material_science               |\n|[3]Heat_and_mass_transfer         |\n|[4]Thermodynamics                 |\n|[5]Thermal_Engg                   |\n|[6]Electrical_circuit_and_networks|\n|[7]Circuit_theory                 |\n|[8]Digital_system                 |\n|[9]Linear_system                  |\n|[10]Micro_electroics              |\n|[11]Power_System                  |\n|[12]Electrical_Machines           |\n|[13]Energy_and_Power_Plants       |\n|                                  |\n|**********************************|\n " );
    printf("Write the number of catagory of the book you are finding :- ");
    scanf("%d",&book);
    if(book==1||book==2)
        printf(" \nShelf:-[1st and 2nd]\n\n Section:-[MECH. ENGG.]\n\n Row:-[First]\n\n Floor:-[Ground]\n\n [(4th_|_) (3rd_|_) (2nd_|_) (>>1st_|_<<)]\n\n***THANK YOU***");
    else if( book==3||book==4||book==5)
        printf(" \nShelf[3rd,4th and 5th]\n\n Section[HEAT ENGG.]\n\n Row[First]\n\n Floor[Ground]\n\n [(4th_|_) (3rd_|_) (2nd_|_) (>>1st_|_<<)]\n\n***THANK YOU***");
    else if( book==6||book==7||book==8||book==9||book==10||book==11||book==12||book==13)
        printf(" \nShelf[1st and 2nd]\n\n Section[ELEC. ENGG.]\n\n Row[First]\n\n Floor[Ground]\n\n [(4th_|_) (3rd_|_) (2nd_|_) (>>1st_|_<<)]\n\n***THANK YOU***");
    else
    printf("___BOOK NOT FOUND___");
    

return 0;
}