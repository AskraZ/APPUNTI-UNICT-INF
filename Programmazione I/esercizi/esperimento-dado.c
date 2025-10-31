#include <stdio.h>
#include <stdlib.h>

int main(){
  int  frequenza1=0;
  int  frequenza2=0;
  int  frequenza3=0;
  int  frequenza4=0;
  int  frequenza5=0;
  int  frequenza6=0;

    
  for(int i=0;i<600000;++i){
    int valore = 1 + rand() % 6;
    switch (valore)
    {
    case 1:
    ++frequenza1;   
    break;
    
    case 2:
    ++frequenza2;
        break;
    case 3:
    ++frequenza3;
        break;
    case 4:
    ++frequenza4;
        break;
    case 5:
    ++frequenza5;
        break;
    case 6:
    ++frequenza6;
    break;
    }
  }

  printf("%s%d%s%d%s%d%s%d%s%d%s%d", " caso 1: ", frequenza1, "\n caso 2: ", frequenza2, "\n caso 3: ", frequenza3, "\n caso 4: ", frequenza4, "\n caso 5: ", frequenza5, "\n caso 6: ", frequenza6);


}
