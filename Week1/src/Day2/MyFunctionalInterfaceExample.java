package Day2;

@FunctionalInterface
interface MyFunctionalInterface{
    public void method();
}
public class MyFunctionalInterfaceExample {
    public static void main(String[] args) {
        MyFunctionalInterface fi;
        //람다식
        fi=()->{
            String str = "method call1";
            System.out.println(str);
        };
        fi.method();

        fi=()-> System.out.println("method call3");
        fi.method();
    }
}
