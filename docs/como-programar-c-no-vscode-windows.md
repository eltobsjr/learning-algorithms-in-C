# Como programar em C no VS Code (Windows)

Guia rapido para configurar o VS Code, instalar o compilador C e compilar/rodar um codigo.

## Instalar o compilador (MinGW-w64 via MSYS2)

1. Baixe o MSYS2: https://www.msys2.org
2. Instale e abra o terminal "MSYS2 MSYS".
3. Atualize o sistema:

```
pacman -Syu
```

4. Feche o terminal e abra novamente o "MSYS2 MSYS".
5. Instale o toolchain:

```
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

6. Adicione ao PATH (Windows):

```
C:\\msys64\\ucrt64\\bin
```

Dica: reinicie o VS Code depois de ajustar o PATH.

## Instalar o VS Code

1. Baixe em: https://code.visualstudio.com
2. Instale normalmente.

## Extensao recomendada

- C/C++ (ms-vscode.cpptools)

## Como buildar e rodar um codigo C

### Exemplo

Suponha um arquivo chamado `questao01.c`.

#### Compilar

```
gcc questao01.c -o questao01
```

#### Rodar (PowerShell)

```
./questao01.exe
```

## Dicas

- Se o `gcc` nao for encontrado, verifique o PATH.
- Para multiplos arquivos C:

```
gcc arquivo1.c arquivo2.c -o programa
```
