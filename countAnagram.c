#include <stdio.h>
#include <string.h>

int main(){
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbcc bdddccccad cdbbaaacaccdabdd";
  // counting the characters in string 1
  for(int i = 0; i < strlen(s1); i++){
    // update counter1[]
    if (s1[i] == 'a'){
      counter1[0]++;
    }
    if (s1[i] == 'b'){
      counter1[1]++;
    }
    if (s1[i] == 'c'){
      counter1[2]++;
    }
    if (s1[i] == 'd'){
      counter1[3]++;
    }
    if (s1[i] == ' '){
      continue;
    }
  }
// counting the characters in String 2
  for(int i = 0; i < strlen(s2); i++){
    // update counter2[]
    if (s2[i] == 'a'){
      counter2[0]++;
    }
    if (s2[i] == 'b'){
      counter2[1]++;
    }
    if (s2[i] == 'c'){
      counter2[2]++;
    }
    if (s2[i] == 'd'){
      counter2[3]++;
    }
    if (s2[i] == ' '){
      continue;
    }
  }

  // comparing the counts of both strings
  int flag = 0;
  for (int i = 0; i < 4; i++){
    if (counter1[i] != counter2[i]){
      flag = 1;
    }
  }

  if (flag == 0){
      printf("Anagram!");
  } else {
    printf("Not Anagram!");
  }


  printf("\n");
  for (int i = 0; i < sizeof(counter1)/sizeof(int); i++){
    printf("%d ", counter1[i]);
  }
  printf("\n");
  for (int i = 0; i < sizeof(counter2)/sizeof(int); i++){
    printf("%d ", counter2[i]);
  }

  


  return 0;
}
