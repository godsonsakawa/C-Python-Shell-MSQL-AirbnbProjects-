#!/usr/bin/node

if (process.argv[2] === undefined) {
  console.log('Missing size');
} else if (isNaN(process.argv[2])) {
  console.log('Missing size');
} else {
  for (let i = 0; i < process.argv[2]; i++) {
    let row = '';
    for (let k = 0; k < process.argv[2]; k++) {
      row += 'X';
    }
    console.log(row);
  }
}
