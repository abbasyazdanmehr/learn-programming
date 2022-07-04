void main(List<String> args) {
  // if
  int age = 10;
  if (age > 30) {
    print("You are old my friend!");
    print("you should care yourself!");
  } else {
    print("You are young my friend!");
    print("God bless");
  }
  print("Here is after 'if'");

  // else if
  double grade = 17.5;
  if (grade > 17) {
    print("Your grade is A");
  } else if (grade > 14) {
    print("Your grade is B");
  } else {
    print("Your grade is C");
  }

  // nested if
  String username = "ali";
  String password = "pass";
  if (username == "ali") {
    if (password == "pass") {
      print("you enter successfully!");
    } else {
      print("password is not true");
    }
  } else {
    print("username not found!");
  }
}
