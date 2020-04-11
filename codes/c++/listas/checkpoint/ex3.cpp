/*
a) a maior e a menor altura encontradas; (terminado)
b) a idade da mulher mais alta;
c) a idade do homem mais baixo;
d) a diferença de idade entre a mulher e o homem com mais idade;
e) a média de peso da população;
f) o número de mulheres entre 18 e 60 anos acima de 50 quilos e abaixo de 80;
g) o percentual total de homens na população.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    float altura = 0;
    float peso = 0, pesoTotal = 0;
    float maiorAltura = 0;
    float menorAltura = 0;
    float alturaM;
    float alturaH;
    

    int diferenca = 0, mulheresPF = 0, numHom = 0;
    int idade = 0, idadeMulherMaisAlta = 0, idadeHomemMaisBaixo = 0, hMaisVelho = 0, mMaisVelha = 0;
    char sex = 'a';

    for (int i = 1; i <= 100; i++)
    {
        while(altura <= 0)
        {
            cout<<"altura em cm: ";
            cin >> altura;
        }

        if(i == 1)//altura setada
            {
                maiorAltura = altura;
                menorAltura = altura;
            }else if(altura > maiorAltura)
            {
                maiorAltura = altura;
            }else if(altura < menorAltura)
            {
                menorAltura = altura;
            }

        while(peso <= 0)
        {
            cout<<"peso em kg: ";
            cin >> peso;            
        }
        pesoTotal+=peso;

        while(idade <= 0)
        {
            cout<<"idade: ";
            cin >> idade;
        }

        while(toupper(sex) != 'H' && toupper(sex) != 'M')
        {
            cout << "Sexo(Homem(H) Mulher(M)): ";
            cin >> sex;
            cout<<endl;
        }
        
        if(sex == 'M')
        {
            if(i==1)
            {
                alturaM = altura;
                mMaisVelha = idade;
            }

            if(idade >= 18 && idade <= 60 && peso >=50 && peso <=80)
            {
                mulheresPF++;
            }
            
            if(altura > alturaM)
            {
                alturaM = altura;
                idadeMulherMaisAlta = idade;
            }

            if(idade > mMaisVelha)
            {
                mMaisVelha = idade;
            }
        }else
        {
            numHom++;
            if(i==1)
            {
                alturaH = altura;
            }
            
            if(altura < alturaH)
            {
                alturaH = altura;
                idadeHomemMaisBaixo = idade;
            }
            
            if(idade > hMaisVelho)
            {
                hMaisVelho = idade;
            }
        }
        


        altura = 0;
        peso = 0;
        idade = 0;
        sex = 'a';

    }

    diferenca = hMaisVelho - mMaisVelha;

    if (diferenca < 0)
    {
        diferenca *=-1;
    }
    
    cout<< "Maior Altura: " << maiorAltura<<endl
        << "Menor Altura: " << menorAltura<<endl
        << "Idade da mulher mais alta: " << idadeMulherMaisAlta<< " anos"<<endl
        << "Idade do homem mais baixo: " << idadeHomemMaisBaixo<< " anos"<<endl
        << "Diferen;a de idade entre o homem e a mulher mais velhos: " << diferenca<<endl
        << "Media de peso da populacao: " << pesoTotal/100.0<<endl
        << "O número de mulheres entre 18 e 60 anos acima de 50 quilos e abaixo de 80: " << mulheresPF<<endl
        << "o percentual total de homens na população: " << numHom << "%"<<endl;
    return 0;
}