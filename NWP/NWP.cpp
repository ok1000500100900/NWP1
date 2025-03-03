
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include "NWP.h"

using namespace std;

int x;
int y;
int NWP(int x, int y);
int nwp;
int temp;
int rest;

int main() {
  printf("Podaj dwie liczby: ");
  cin >> x >> y;
  printf("Ich najwiekszy wspolny podzielnik to %d", NWP(x, y));
  return 0;
}
