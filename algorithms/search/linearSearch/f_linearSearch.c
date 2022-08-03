#include <stdio.h>
#include <string.h>

// Maybe one day I handle this with dynamic memory
#define MAX_LINES_AMOUNT 5
#define MAX_STRING_LEN 128

void convertToNumbersList(char stringList[MAX_LINES_AMOUNT][MAX_STRING_LEN]);
void readFile(void);

int main(void)
{
  // readFile();

  int unsortedNumbers[5] = {34, 3, 6, 23, 4};
  size_t unsortedNumbersSize = sizeof(unsortedNumbers) / sizeof(unsortedNumbers[0]);
  int target = 2;
  char found = 0;

  for (int i = 0; i < unsortedNumbersSize; i++)
  {
    if (unsortedNumbers[i] == target)
    {
      found = 1;
    }
  }

  printf("%d\n", found);

  return 0;
}

void convertToNumbersList(char stringList[MAX_LINES_AMOUNT][MAX_STRING_LEN])
{

  for (int j = 0; j < MAX_LINES_AMOUNT; j++)
  {
    printf("%s\n", stringList[j]);
  }
}

void readFile(void)
{
  FILE *pFile;
  pFile = fopen("./../../../mocks/listOfNumbers.txt", "r");

  if (pFile == NULL)
  {
    perror("Error opening file");
  }

  char buffer[MAX_STRING_LEN];
  char lines[MAX_LINES_AMOUNT][MAX_STRING_LEN];

  for (int i = 0; fgets(buffer, MAX_STRING_LEN, pFile) != NULL; i++)
  {
    strcpy(lines[i], buffer);
  }
  fclose(pFile);

  convertToNumbersList(lines);
}