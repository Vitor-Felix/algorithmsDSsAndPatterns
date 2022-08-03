def main(): 
  unsortedNumbers = [5, 23, 80, 32, 5, 1]
  target = 18
  found = False

  for number in unsortedNumbers:
    if number == target:
      found = True
  
  print(found)

main()