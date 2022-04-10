#include <stdio.h>

int main()
{
 float preco_art1, percentual1, art1d, desconto1, preco_art2, percentual2, art2d, desconto2, preco_art3, percentual3, art3d, desconto3, art1, art2, art3, total;

 printf ("Artigo: ");
 scanf ("%f", &art1);
 printf ("Preco : ");
 scanf ("%f", &preco_art1);
 printf ("Percentual | desconto: ");
 scanf ("%f", &percentual1);
 desconto1= preco_art1*(percentual1/100);
 art1d = preco_art1-desconto1;
 printf ("Valor do artigo com desconto:  ", &art1d);



 printf ("Artigo: ");
 scanf ("%f", &art2);
 printf ("Preco : ");
 scanf ("%f", &preco_art2);
 printf ("Percentual | desconto: ");
 scanf ("%f", &percentual2);
 desconto2 = preco_art2*(percentual2/100);
 art2d = preco_art2-desconto2;
 printf ("Valor do artigo com desconto: ", art2d);



  printf ("Artigo: ");
 scanf ("%f", &art3);
 printf ("Preço : ");
 scanf ("%f", &preco_art3);
 printf ("Percentual | desconto: ");
 scanf ("%f", &percentual3);
 desconto3=preco_art3*(percentual3/100);
 art3d = preco_art3-desconto3;
 printf ("Valor do artigo com desconto: ", art3d);


 total =(art1d+art2d+art3d);
 printf ("Total a pagar: ",total);
}

