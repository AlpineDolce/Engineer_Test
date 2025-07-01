public class Main {
  public static void main(String[] args) {
    int a = 5, b = 0;

    try {
      System.out.print(a / b);  // 5 / 0은 예외 발생
    } catch (ArithmeticException e) {
      System.out.print("출력1");  // ArithmeticException 예외 처리
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.print("출력2");  // ArrayIndexOutOfBoundsException 예외 처리
    } catch (NumberFormatException e) {
      System.out.print("출력3");  // NumberFormatException 예외 처리
    } catch (Exception e) {
      System.out.print("출력4");  // 나머지 모든 예외 처리
    } finally {
      System.out.print("출력5");  // 무조건 실행되는 블록
    }
  }
}

// cd java
// javac Hello.java
// java Hello