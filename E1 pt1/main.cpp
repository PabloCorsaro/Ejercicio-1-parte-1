#include <iostream>

using namespace std;

string preguntarSioNo(string);
string preguntar(string);
string miembro();
string avaladoPor2();
string esBoletaOficial();
string papelIncorrecto();
string esMultiple();
string evaluarPreCandidatura();
string evaluarNulidaddeVoto();

int main()
{
    cout << "Bienvenido al sistema de evaluacion de precandidatos y votos nulos. \n";
    cout << "Comienzo: " << endl;
    cout << evaluarPreCandidatura();
    cout << evaluarNulidaddeVoto();

    return 0;
}

//Preguntas
string miembro()
{
    string pregunta = "Es miembro";
    return pregunta;
}

string avaladoPor2()
{
    string pregunta = "Es avalado por el 2%";
    return pregunta;
}

string esBoletaOficial()
{
    string pregunta = "Es boleta oficial";
    return pregunta;
}

string papelIncorrecto()
{
    string pregunta = "Es papel correcto";
    return pregunta;
}

string esMultiple()
{
    string pregunta = "Tiene un solo cargo";
    return pregunta;
}

//Funciones

string evaluarPreCandidatura()
{
    if(preguntar(miembro()) == "si" && preguntar(avaladoPor2()) == "si" )
    {
        return "Puede ser precandidato.\n";
    }
    else
    {
        return "No puede ser precandidato.\n";
    }
}

string evaluarNulidaddeVoto()
{
    if(preguntar(esBoletaOficial()) == "si" && preguntar(papelIncorrecto()) == "si" && preguntar(esMultiple()) == "si")
    {
        return "El voto es valido.\n";
    }
    else
    {
        return "El voto es nulo.\n";
    }
}

string preguntar(string pregunta)
{
  return preguntarSioNo(pregunta);
}

string preguntarSioNo(string pregunta)
{
    string respuesta;
    cout << pregunta << "?" << endl;
    getline(cin,respuesta);

    return respuesta;
}
