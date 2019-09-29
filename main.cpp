//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include "QuickSort.h"
#include "HeapSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include "CountryTrade.cpp"

using namespace std;

int main(){

    char szbuffer[1024];
    vector<CountryTrade*> registros;

    FILE* pfile;
    pfile = fopen("Proyecto2.csv", "r");

    size_t size;
    do{
        memset(szbuffer, 0, 1024);
        fgets(szbuffer, 500, pfile);
        if(strlen(szbuffer)>0){
            auto* pcountry = new CountryTrade;
            char* pch;
            int i = 0;
            pch = strtok(szbuffer, ",");
            while(pch != NULL){
                i++;
                char* pend;
                if(i==1)
                    pcountry->Country_Area = pch;
                else if(i==2)
                    pcountry->Year = strtod(pch, &pend);
                else if(i==3)
                    pcountry->Commodity = pch;
                else if(i==4)
                    pcountry->Flow = pch;
                else if(i==5)
                    pcountry->Trade_usd = strtod(pch, &pend);
                pch = strtok(NULL, ",");
            }
            registros.push_back(pcountry);
        }
    }
    while(strlen(szbuffer)>0);
    fclose(pfile);

    pfile = fopen("Proyecto_result.csv", "w");

    size_t i;
    for(i=0; i<registros.size(); i++){
        CountryTrade* pcountry;
        pcountry=(CountryTrade*)registros.at(i);
        if(pcountry){
            cout << pcountry->Country_Area<<endl;
            string registro = pcountry->Country_Area;
            fwrite(registro.c_str(), 1, registro.length(), pfile);
        }
    }

    fclose(pfile);

    cout << endl;

    ifstream myfile1;
    myfile1.open("SORTS1", ios::in);
    vector<int> vector1;

    if(!myfile1){
        cout << "ERROR"<<endl;
        return 0;
    }

    if(myfile1.is_open()){
        int num;
        while(myfile1>>num){
            //cout<<num<<endl;
            vector1.push_back(num);
        }
    }

    myfile1.close();

    cout << endl;

    HeapSort s1;
    s1.print(vector1);
    cout << endl;
    //int size = sizeof(vector1);
    s1.heapsort(vector1);
    s1.print(vector1);
    cout << endl;


    /*s1.execute(vector1);
    s1.quicksort(vector1.begin(), vector1.end());
    s1.ordenar_particion(vector1.begin(), vector1.end());
    */


    return 0;
}