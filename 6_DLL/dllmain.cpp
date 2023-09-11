// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <string>

//declara una funcion expuesta

extern "C"
{
    //ejemplo de funcion si parametros que retorna una cadena de texto
    __declspec(dllexport) const char* GetCodeName()
    {
        const char* msg = "CodeName ALdo";
        return msg;
    }
    //funcion que recibe dos parametros y retorna un valor
    __declspec(dllexport) double Sumar(double a, double b) 
    {
        return a + b;
    }
    //concatenacion de string
    __declspec(dllexport) std::string Concatenar(const std::string frase1, const std::string frase2)
    {
        return frase1 + frase2;
    }

}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

