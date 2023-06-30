#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *buyultme(char *a) {
  for (int i = 0; a[i]; i++) {
    a[i] = toupper(a[i]);
  }
  return a;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Kullanim: %s metin sayi\n", argv[0]);
    return 1;
  }
  char *metin = argv[1];
  int sayi = atoi(argv[2]);
  metin = buyultme(metin);
  for(int i=0;strlen(metin)>i;i++){
    metin[i]=metin[i]+sayi;
  }
  printf("%s \n",metin);
  return 0;
}
