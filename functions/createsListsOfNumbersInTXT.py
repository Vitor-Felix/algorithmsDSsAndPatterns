#!/usr/local/bin/python3
from numpy import random

def generateListsWithRandomNumbers(per_line=30, low_range=0, high_range=100):
  listOfNumbersList = random.randint(low_range, high_range, size=(per_line))

  listOfNumbersList = list(map(str,listOfNumbersList))

  return ",".join(listOfNumbersList)

def writeInTxt(lines_amount=5, per_line=30, low_range=0, high_range=100):

  with open('./../mocks/listOfNumbers.txt', 'w') as writer:
    for line in range(lines_amount):
      writer.writelines(generateListsWithRandomNumbers(per_line, low_range, high_range))
      writer.write('\n')

if __name__ == "__main__":
  writeInTxt()