/*
11. 다음 Java 코드 중에서 밑줄에 들어갈 알맞는 코드를 작성하시오.
class Car implements Runnable{
  int a;
  
  public void run(){
     system.out.println("message")
  }
}
  
public class Main{
  public static void main(String args[]){
    Thread t1 = new Thread(new ___());
    t1.start();
  }
} */

class Car implements Runnable{
  int a;
  
  public void run(){
     System.out.println("message");
  }
}
  
public class Main{
  public static void main(String args[]){
    Thread t1 = new Thread(new Car());
    t1.start();
  }
}