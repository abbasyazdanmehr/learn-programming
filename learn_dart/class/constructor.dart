class User {
  // this is the only way for defining final fields in class (see constructor)
  final String username;
  final String password;
  final int age;
  User({this.username = "ali", this.password = "1", this.age = 10});
}
