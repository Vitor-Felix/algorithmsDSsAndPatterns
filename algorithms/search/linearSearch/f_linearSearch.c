#include <stdio.h>
#include <string.h>
#include <time.h>

// Maybe one day I handle this with dynamic memory
#define MAX_LINES_AMOUNT 5
#define MAX_STRING_LEN 128

void convertToNumbersList(char stringList[MAX_LINES_AMOUNT][MAX_STRING_LEN]);
void readFile(void);

int main(void)
{
  // readFile();
  double timeSpent = 0.0;

  int unsortedNumbers[5] = {34, 3, 6, 23, 4};
  size_t unsortedNumbersSize = sizeof(unsortedNumbers) / sizeof(unsortedNumbers[0]);
  int target = 2;
  char found = 0;

  clock_t begin = clock();

  for (int i = 0; i < unsortedNumbersSize; i++)
  {
    if (unsortedNumbers[i] == target)
    {
      found = 1;
    }
  }

  clock_t end = clock();
  timeSpent += (double)(end - begin) / CLOCKS_PER_SEC;

  printf("%d\n", found);
  printf("Elapsed time: %f\n", timeSpent);

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