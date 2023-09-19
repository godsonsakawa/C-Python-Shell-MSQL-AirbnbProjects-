#!/usr/bin/node

// Get the commandline args (excluding the frst two default ones, nodejs execurtable and script filename )
const args = process.argv.slice(2);

// If there are no args or only one arg, print 0
if (args.length < 2) {
  console.log(0);
  process.exit();
}

// Initialize two variables to keep track of the two largest numbers so far
let largest = parseInt(args[0]);
let secondLargest = parseInt(args[1]);

// Check if the first two are largest so far
if (secondLargest > largest) {
  const temp = largest;
  largest = secondLargest;
  secondLargest = temp;
}

// Loop through the remaining args

for (let i = 2; i < args.length; i++) {
  const current = parseInt(args[i]);
  // If the current number is larger than the largest seen so far,
  // Update both variables accordingly
  if (current > largest) {
    secondLargest = largest;
    largest = current;
  } else if (current > secondLargest) {
    secondLargest = current;
  }
}
// print the secon largest number
console.log(secondLargest);
