#!/usr/bin/node

exports.nbOccurences = function (list, searchElement) {
  if (searchElement !== 'undefined' && searchElement !== null) {
    let count = 0;
    for (const element of list) {
      if (element === searchElement) {
        count += 1;
      }
    }
    return (count);
  }
};
