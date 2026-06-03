Seu arquivo Markdown (MD) está pronto
[file-tag: code-generated-file-0-1779907246212456236]

Abaixo está o conteúdo formatado do arquivo `README.md` que gerei para você colocar na raiz do seu repositório no GitHub. Ele foi estruturado de forma profissional, explicando todas as regras de negócio e funcionalidades presentes no seu código C++:

```markdown
# Sistema de Notas v4.0 

Este é um programa desenvolvido em **C++** para console, projetado para gerenciar e analisar o desempenho acadêmico de alunos em múltiplas disciplinas. Ele calcula médias, define o status acadêmico de cada estudante (Aprovado, Recuperação ou Reprovado), gera um relatório geral com estatísticas completas e suporta persistência de dados em arquivos de texto.

##  Funcionalidades

- **Menu Inicial Interativo:** Permite escolher entre iniciar um novo relatório ou visualizar o último relatório gravado.
- **Validação de Entradas:** Garante que dados inconsistentes não quebrem o sistema:
  - Limite de 1 a 20 alunos.
  - Limite de 1 a 5 disciplinas.
  - Notas estritamente entre 0.0 e 10.0.
- **Cálculo Automático de Médias:** Processamento preciso com base nas notas fornecidas.
- **Classificação de Status:**
  -  **Aprovado:** Média igual ou superior a 7.0
  -  **Recuperação:** Média entre 5.0 e 6.9
  -  **Reprovado:** Média abaixo de 5.0
- **Resumo Geral:** Exibe no console a contagem total de alunos aprovados, em recuperação e reprovados.
- **Persistência em Arquivo:** Salva automaticamente todos os dados processados e o resumo final em um arquivo externo chamado `Relatorio.txt`.

## Tecnologias Utilizadas

- **Linguagem:** C++
- **Bibliotecas Padrão:** `<iostream>`, `<string>`, `<fstream>`
- **API Externa:** `<windows.h>`

##  Como Executar o Projeto

### Pré-requisitos
Você precisará de um compilador de C++ instalado em sua máquina (como o `g++` do GCC ou MinGW para Windows).

### Passo a Passo

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/nome-do-repositorio.git](https://github.com/seu-usuario/nome-do-repositorio.git)