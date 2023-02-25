function find3MinMax(arr, n) {
  let set = new Set(arr);
  if (set.size < 3) {
    console.log("Not Possible");
    console.log("Not Possible");
    return;
  }

  let newArr = [...set];
  newArr.sort((a, b) => a - b);
  let k = newArr.length;
  console.log(newArr[0], newArr[1], newArr[2]);
  console.log(
    newArr[newArr.length - 3],
    newArr[newArr.length - 2],
    newArr[newArr.length - 1]
  );
}
find3MinMax([1, 2, 3, 4, 12, 4, 10, 7], 7);
