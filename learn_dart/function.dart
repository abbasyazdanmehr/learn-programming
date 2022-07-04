void main(List<String> args) {
  print(sumUp(1, 2, 3));
  print(sumOptional(1, 5));
  print(sumOptional(1));
  print(sumOptional(1, 3, 4));
  print(sumDefault(1));
  print(multiply(first: 1));
  print(multiply(first: 1, second: 2));
  // print(multiply2(first: 4)); required keyword cause error here
  print(multiply2(first: 4, second: 5));
}

int sumUp(int a, int b, int c) {
  return a + b + c;
}

// Function overloading is not supported in Dart at all.
// int sumUp(int a, int b) {
//   return a + b;
// }

// optional parameter
int sumOptional(int a, [int? b, int? c]) {
  int sum = a;
  if (b != null) sum += b;
  if (c != null) sum += c;
  return sum;
}

// default value
int sumDefault(int a, [int b = 1, int c = 2]) => a + b + c;

// named parameter
int multiply({int? first, int? second}) => (first ?? 0) * (second ?? 0);
int multiply2({required int? first, required int? second}) =>
    (first ?? 0) * (second ?? 0);
