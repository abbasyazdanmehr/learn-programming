void main(List<String> args) {
  print(1 / 0); // this is not exception in dart :)

  List<int> numbers = [
    1,
    34,
    23,
  ];

  // try catch
  try {
    print(numbers[-1]);
  } on RangeError catch (e) {
    print("this is range error: ${e.toString()}");
  } on Exception catch (e) {
    print("this is unknown exception: ${e.toString()}");
    rethrow; // If you can’t completely handle the exception, use the rethrow keyword to propagate the exception
  } finally {
    print("end of try and catch");
  }

  // throw exception
  // throw Exception('Something went wrong!');
  // throw "Common Man";
}
