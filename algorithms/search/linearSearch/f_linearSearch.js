const main = () => {
  const unsortedNumbers = [21, 23, 4, 3, 8];
  const target = 80;
  let found = false;

  for (let i = 0; i < unsortedNumbers.length; i++) {
    if (unsortedNumbers[i] == target) {
      found = true;
    }
  }

  console.log(found);
};

main();
