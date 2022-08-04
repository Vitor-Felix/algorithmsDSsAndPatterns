import time

def main(): 
  unsortedNumbers = [5, 23, 80, 32, 5, 1]
  target = 18
  found = False

  timerStart = time.time()

  for number in unsortedNumbers:
    if number == target:
      found = True

  timerEnd = time.time()
  
  print(found)
  print(f'Elapsed time: {timerEnd - timerStart}')

main()