void main(List<String> args) {
  Student student = Student();
  student.age = 10; // this is setter method :)
  student.name = "ali alavi";
  print(student.toString());
  print(student.name);
}

class Student {
  String _name = "null";
  int _age = 0;
  double _grade = 0;

  // getter
  String get name => _name; // arrow form
  double get grade => _grade;
  int get age {
    // computed form
    return _age;
  }

  // setter
  set name(String value) {
    _name = value;
  }

  set age(int value) {
    _age = value;
  }

  set grade(double value) => _grade = value;

  @override
  String toString() {
    return "Student: {name: $name, " + "age: $age, " + "grade: $grade}";
  }
}
