#include <iostream>
using namespace std;
class Retangulo
{
private:
    int largura, comprimento;

public:
    bool setLargura(float);
    bool setComprimento(float);
    float getLargura();
    float getComprimento();
    float area();
    float perimetro();
};
bool Retangulo::setLargura(float aux)
{
    if (aux >= 0)
    {
        largura = aux;
        return true;
    }
    else
    {
        return false;
    }
}

bool Retangulo::setComprimento(float aux)
{
    if (aux >= 0)
    {
        comprimento = aux;
        return true;
    }
    else
    {
        return false;
    }
}

float Retangulo::getLargura()
{
    return largura;
}

float Retangulo::getComprimento()
{
    return comprimento;
}

float Retangulo::area()
{
    float area = largura * comprimento;
    return area;
}

float Retangulo::perimetro()
{
    float perimetro = 2 * (largura + comprimento);
    return perimetro;
}

void menu()
{
    Retangulo *ret = new Retangulo;
    int entrada;
    int flag = 1;
    do
    {
        cout << "Insira a largura do retangulo: ";
        cin >> entrada;
        ret->setLargura(entrada);
        while (ret->setLargura(entrada) == false)
        {
            cout << "Largura deve ser um numero positivo: ";
            cin >> entrada;
            ret->setLargura(entrada);
        }
        cout << "Insira o comprimento do retangulo: ";
        cin >> entrada;
        ret->setComprimento(entrada);
        while (ret->setComprimento(entrada) == false)
        {
            cout << "Comprimento deve ser um numero positivo: ";
            cin >> entrada;
            ret->setComprimento(entrada);
        }
        cout << "A area eh: " << ret->area() << "\n";
        cout << "O perimetro eh: " << ret->perimetro() << "\n";
        cout << "Quer calcular novamente?\n1 - Sim\n2 - Nao\n";
        cin >> flag;
    } while (flag == 1);
}