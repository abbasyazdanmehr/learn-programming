void main(List<String> args) {
  // while
  int i = 0;
  while (i <= 3) {
    print(i);
    i++;
  }

  // continue: go to first of loop
  int k = 1;
  while (k != 10) {
    if (k % 2 == 0) {
      k++; // if you comment this line you see infinite loop
      continue;
    }
    print(k);
    k++;
  }

  // break: go out of loop
  int c = 1;
  while (true) {
    if (c == 10) break;

    print(c);
    c++;
  }

  // nested whiles
  // ...
}
