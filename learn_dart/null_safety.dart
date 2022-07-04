class Student {
  String? name;
  int? age;
  Student(name, age);
  String get get_name => name ?? "ali";
}

void main(List<String> args) {
  // int a = null; this is error my bro!
  int? a = null; // "int?"" tell to dart compiler
  // that this expect that this is null and it chacks when using from this var

  a = 2;
  print("a is $a");

  int? b; // this is equal with: int? b = null;
  print(b); // this prints null.

  b ??= 3; // this is equal to: if (b == null) b = 3;

  print(b);

  // b ??= 5; // you can see here the warning,
  // because b is never is null in this line,
  // dart language has calculated everything perfectly.
  print(b);

  Student? stduent;
  // below code equal to this = (student != null) ? student.name : null
  print(stduent?.name);

  print("end of code");
}
