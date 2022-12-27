package Day2;

import java.util.HashSet;

public class SetTest {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();

        set.add("Milk");
        set.add("Bread");
        set.add("Butter");
        set.add("Cheese");
        set.add("Ham");
        set.add("Ham");

        System.out.println(set);

        // set은 내가 입력한대로 데이터가 들어가지 않음
        // 데이터는 하나만 들어갈 수 있음.
        if(set.contains("Ham"))
            System.out.println("Ham도 포함되어 있음");
    }
}
