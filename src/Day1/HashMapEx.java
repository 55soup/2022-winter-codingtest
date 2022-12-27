package Day1;

import java.util.*;
import java.util.Map.Entry;

public class HashMapEx {
    public static void main(String[] args) {
        Map<String, Integer> people = new HashMap<String, Integer>();
        people.put("김길동", 85);
        people.put("홍길동", 50);
        people.put("최길동", 80);

        System.out.println("총 Entity : " + people.size());

        Set<Entry<String, Integer>> set = people.entrySet();
        Iterator<Entry<String, Integer>> it = set.iterator(); //Map 복사

        while(it.hasNext()){ //it에 데이터가 있는가?
            Entry<String, Integer> e=it.next();
            System.out.println("\t"+e.getKey()+":"+e.getValue());

        }
        Collection values = people.values();
        Collection keys=people.keySet();
        it=values.iterator();
        Iterator<Entry<String, Integer>> it2=keys.iterator();
        System.out.println("최고점수: " + Collections.max(values) + ", 이름: " + Collections.max(keys));

    }
}
