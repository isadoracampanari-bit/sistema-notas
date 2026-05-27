#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    // Entrada - declaração das variáveis
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;

    // Processamento

    // LEITURA DE ALUNOS (Commit 1)
    cout << "=== SISTEMA DE NOTAS v4.0 ===" << endl;

    do
    {
        cout << "Quantidade de alunos (1 a 20): ";
        cin >> qtdAlunos;
    } while (qtdAlunos < 1 || qtdAlunos > 20);

    cin.ignore();

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Nome do aluno: " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    do
    {
        cout << "\nQuantidade de disciplinas (1 a 5): " << endl;
        cin >> qtdDisciplinas;
    } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "\nNotas de " << nomes[i] << ":" << endl;
        float soma = 0;
        for (int j = 0; j < qtdDisciplinas; j++)
        {
            do
            {
                cout << "Disciplina " << j + 1 << " (1 a 5): ";
                cin >> notas[i][j];
            } while (notas[i][j] < 0 || notas[i][j] > 10);
            soma += notas[i][j];
        }
        media[i] = soma / qtdDisciplinas;
    }

    // Saída
    cout << "\nAlunos cadastrados:" << endl;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "  " << i + 1 << ". " << nomes[i] << endl;
    }

    cout << "\n=== RELATÓRIO ===" << endl;
    int aprovados = 0, recuperacao = 0, reprovado = 0;

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << nomes[i] << " - Media: " << media[i] << " - ";
        if (media[i] >= 7)
        {
            cout << "Aprovado" << endl;
            aprovados++;
        }
        else if (media[i] >= 5)
        {
            cout << "Recuperação" << endl;
            recuperacao++;
        }
        else
        {
            cout << "Reprovado" << endl;
            reprovado++;
        }
    }

    cout << "\n=== RESUMO DO SISTEMA ===" << endl;
    cout << "Alunos Aprovados: " << aprovados << endl;
    cout << "Alunos em Recuperacao: " << recuperacao << endl;
    cout << "Alunos Reprovados: " << reprovado << endl;

    // SALVAR EM ARQUIVO (Commit 4)
    ofstream arquivo("Relatorio.txt");

    if (arquivo.is_open())
    {
        arquivo << "=== RELATÓRIO ===" << endl;
        for (int i = 0; i < qtdAlunos; i++)
        {
            arquivo << nomes[i] << " Média:" << media[i] << " - ";
            if (media[i] >= 7)
            {
                arquivo << "Aprovado" << endl;
            }
            else if (media[i] >= 5)
            {
                arquivo << " Recuperação" << endl;
            }
            else
            {
                arquivo << " Reprovado" << endl;
            }
        }
        arquivo << "\nResumo: " << aprovados << " aprovados, " << recuperacao << " Em recuperação, " << reprovado << " reprovados. " << endl;

        arquivo.close();
        cout << "\nRelatório salvo em relatorio.txt" << endl;
    }
    else
    {
        cout << "Erro ao criar arquivo." << endl;
    }

    return 0;
}
