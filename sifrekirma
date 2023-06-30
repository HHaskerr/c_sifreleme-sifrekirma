#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Kullanim: %s metin sayi\n", argv[0]);
    return 1;
  }
  char *metin = argv[1];
  int sayi = atoi(argv[2]);
  for(int i=0;strlen(metin)>i;i++){
    metin[i]=metin[i]-sayi;
  }
  printf("%s \n",metin);
  return 0;
}
