# Como programar em C no VS Code (Linux)

Guia rapido para configurar o VS Code, instalar o compilador C e compilar/rodar um codigo.

## Instalar compilador e ferramentas basicas (Ubuntu/Debian)

```
sudo apt update
sudo apt install build-essential gdb
```

## Instalar o VS Code

- https://code.visualstudio.com

## Extensao recomendada

- C/C++ (ms-vscode.cpptools)

## Como buildar e rodar um codigo C

### Exemplo

Suponha um arquivo chamado `questao01.c`.

#### Compilar

```
gcc questao01.c -o questao01
```

#### Rodar

```
./questao01
```

## Dicas

- Se o `gcc` nao for encontrado, verifique o PATH.
- Para multiplos arquivos C:

```
gcc arquivo1.c arquivo2.c -o programa
```
