void main(List<String> args) {
  // for
  for (var i = 0; i < 20; i++) {
    print('i is $i');
  }

  // blank for
  var i;
  for (i = 0; i < 20; i++);
  print(i);

  // more than one variable
  for (var i = 0, j = 10; i < j; i++, j--) {
    print("i is $i, j is $j");
  }

  // continue: go first of loop
  for (var i = 0; i < 20; i++) {
    if (i == 7) {
      continue;
    }
    print(i);
  }

  // break: go out of loop
  for (var i = 0; i < 20; i++) {
    if (i == 7) {
      break;
    }
    print(i);
  }

  List<String> names = [
    "ali",
    "reza",
    "ahmad",
    "mohammad",
  ];

  // for each
  for (var name in names) {
    print(name);
  }
}
