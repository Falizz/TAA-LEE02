# Técnicas de Programação e Análise de Algoritmos

## LEE01 - Lista de Exercícios Extracurricular 02

Este repositório contém os códigos utilizados na resolução dos problemas propostos na LEE02.

### Problemas e Arquivos Correspondentes:

- **A - Distância de Hamming:** [DistanciaBinaria.cpp](./LEE02-TAA/DistanciaBinaria.cpp)
- **B - Encontrar o Inteiro Faltante:** [TriOU.cpp](./LEE02-TAA/TriOU.cpp)
- **C - Ativar Bit:** [SuperBitAtivar.cpp](./LEE02-TAA/SuperBitAtivar.cpp)
- **D - Trocar Bits:** [BitSwap.cpp](./LEE02-TAA/BitSwap.cpp)
- **E - Pribit:** [PriBit.cpp](./LEE02-TAA/PriBit.cpp)

### Explicando os exercícios:

#### A - Distância de Hamming

A distância de Hamming entre duas strings de mesmo comprimento é o número de posições nas quais elas diferem. Para números binários, a distância de Hamming é o número de bits que precisam ser alterados para transformar um número no outro. Sua tarefa é calcular a distância de Hamming entre dois números inteiros positivos. 

**Exemplo:** Para os números binários `101101` e `011011`, a distância de Hamming é 2, pois são necessários dois bit flips para transformar um no outro.

#### B - Encontrar o Inteiro Faltante

Neste exercício, você tem dois inteiros `A` e `B`, e o resultado da operação OR bit-a-bit desses três números, `Y`. Sua tarefa é descobrir qual é o terceiro inteiro `C`, dado `A`, `B` e `Y`. O inteiro `C` deve ser o menor possível e satisfazer a equação `Y = A ∨ B ∨ C`.

**Exemplo:** Dados `A = 8`, `B = 2` e `Y = 11`, o valor de `C` que satisfaz a equação é `1`.

#### C - Ativar Bit

Você deve corrigir um número binário ativando um bit específico. Dado um número inteiro e a posição de um bit (começando a contagem a partir de zero), você deve garantir que o bit nessa posição seja `1`. Se o bit já for `1`, o número não deve ser alterado.

**Exemplo:** Para o número `32` com problema no bit `3`, a ativação do bit resulta no número `40`.

#### D - Trocar Bits

Neste exercício, você deve trocar os valores de dois bits de um número inteiro. Dado um número e as posições de dois bits, troque os valores desses bits e forneça o número resultante.

**Exemplo:** Para o número `10` (representado em binário como `00001010`), trocar os bits nas posições `0` e `3` resulta no número `3` (representado em binário como `00000011`).

#### E - Pribit

Um **pribit** é um número cuja representação binária possui um número primo de bits com valor `1`. Sua tarefa é determinar se um número dado é um pribit.

**Exemplo:** O número `29` (representado em binário como `11101`) tem `4` bits com valor `1`, e `4` é um número não primo, então `29` não é um pribit. Por outro lado, o número `15` (representado em binário como `1111`) tem `4` bits com valor `1`, e `4` é um número primo, então `15` é um pribit.

---

### Como Executar

1. Clone este repositório.
2. Compile e execute os arquivos `.c` correspondentes a cada problema.
3. Utilize os comandos apropriados para compilar e rodar cada arquivo, por exemplo:

   ```sh
   gcc -o DistanciaHamming DistanciaHamming.c
   ./DistanciaHamming
