#include <stdio.h>

int main() {
  const double PI = 3.14159;
  double r, L, K;
  double p, l;
  double alas, tinggi;
  double A, B, C;
  printf("Masukkan r lingkaran: ");
  scanf("%lf", &r);
  L = PI * r * r;
  K = 2 * PI * r;
  printf("Luas lingkaran: %.3lf \n", L);
  printf("Keliling lingkaran: %.3lf \n", K);
  printf("\n");
  printf("Masukkan panjang persegi panjang: ");
  scanf("%lf", &p);
  printf("Masukkan lebar persegi panjang: ");
  scanf("%lf", &l);
  L = p * l;
  K = 2 * (p + l);
  printf("Luas persegi panjang: %.3lf \n", L);
  printf("Keliling persegi panjang: %.3lf \n", K);
  printf("\n");
  printf("Masukkan alas segitiga: ");
  scanf("%lf", &alas);
  printf("Masukkan tinggi segitiga: ");
  scanf("%lf", &tinggi);
  L = 0.5 * alas * tinggi;
  printf("Luas segitiga: %.3lf \n", L);
  printf("\n");
  printf("Masukkan panjang sisi A segitiga: ");
  scanf("%lf", &A);
  printf("Masukkan panjang sisi B segitiga: ");
  scanf("%lf", &B);
  printf("Masukkan panjang sisi C segitiga: ");
  scanf("%lf", &C);
  K = A + B + C;
  printf("Keliling segitiga: %.3lf \n", K);
  printf("\n");

  return 0;
}
