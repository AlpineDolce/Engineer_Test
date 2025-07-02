// 2. 다음은 JAVA 코드 문제이다. 가지고 있는 돈이 총 4620원일 경우 1000원, 500원, 100원, 10원의 지폐 및 동전을 이용하여 보기의 조건에 맞춰 최소한의 코드를 통해 괄호안을 작성하시오.

// public class Problem{
//     public static void main(String[] args){
//  m = 4620;
 
//  a = (              );
//  b = (              );
//  c = (              );
//  d = (              );
 
//  System.out.println(a); //천원짜리     4장 출력
//  System.out.println(b); //오백원짜리  1개 출력
//  System.out.println(c); //백원짜리     1개 출력
//  System.out.println(d); //십원짜리     2개 출력
//     }
// }

public class Problem {
    public static void main(String[] args) {
        int m = 4620;

        int a = (m / 1000);              // 천원짜리 개수
        int b = ((m % 1000) / 500);      // 오백원짜리 개수
        int c = ((m % 500) / 100);       // 백원짜리 개수
        int d = ((m % 100) / 10);        // 십원짜리 개수

        System.out.println(a); // 천원짜리 4장 출력
        System.out.println(b); // 오백원짜리 1개 출력
        System.out.println(c); // 백원짜리 1개 출력
        System.out.println(d); // 십원짜리 2개 출력
    }
}
