const { performance } = require("perf_hooks");

const main = () => {
  const unsortedNumbers = [21, 23, 4, 3, 8];
  const target = 80;
  let found = false;

  const timerStart = performance.now();

  for (let i = 0; i < unsortedNumbers.length; i++) {
    if (unsortedNumbers[i] == target) {
      found = true;
    }
  }

  const timerEnd = performance.now();

  console.log(found);
  console.log(`Elapsed time: ${timerEnd - timerStart}`);
};

main();
