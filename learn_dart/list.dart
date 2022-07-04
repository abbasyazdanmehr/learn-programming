void main(List<String> args) {
  // List
  List<String> aListOfStrings = ['one', 'two', 'three'];

  // one specific property in list by any method
  bool hasOne = aListOfStrings.any((element) {
    return element == "one";
  });
  print(hasOne);
}
