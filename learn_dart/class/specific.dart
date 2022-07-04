void main(List<String> args) {
  // multiple method notation
  Numbering n = Numbering();
  print('now number is ${n.number}');

  n.numMul2();

  print('now number is ${n.number}');

  n
    ..numPlus2()
    ..numMul2()
    ..numPow2();
  print('now number is ${n.number}');
}

class Numbering {
  int number = 2;
  void numPlus2() {
    number += 2;
  }

  void numMul2() {
    number *= 2;
  }

  void numPow2() {
    number *= number;
  }
}
