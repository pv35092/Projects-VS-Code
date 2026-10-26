#ifndef FUNC_FUNCS_H
#define FUNC_FUNCS_H

/* ============================================================
 * func_funcs.h
 * Protótipos das funções do Exercício 1 e do Exercício 2
 * (Ficha de Trabalho N.º 4 — Parte 1: Funções).
 * Incluir com:  #include "func_funcs.h"
 * ============================================================ */

/* ---- Exercício 1 — funções sobre o tipo char ---- */
int  isDigit(char c);
int  isAlpha(char c);
int  isAlNum(char c);
char toLower(char c);
char toUpper(char c);

/* ---- Exercício 2 — funções sobre inteiros ---- */
int resto(int a, int b);
int impar(int x);
int perfeito(int n);
int primo(int n);

#endif /* FUNC_FUNCS_H */