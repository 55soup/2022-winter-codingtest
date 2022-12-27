package Day2;

public class Member {
    private int memberId; //회원아이디
    private String memberName; //회원이름
    
    public Member(int memberId, String memberName) { //생성자
        this.memberId = memberId;
        this.memberName = memberName;
    }

    public int getMemberId() {
        return memberId;
    }

    public void setMemberId(int memberId) {
        this.memberId = memberId;
    }

    public String getMemberName() {
        return memberName;
    }

    public void setMemberName(String memberName) {
        this.memberName = memberName;
    }

    public boolean equals(Object obj){
        if(obj instanceof Member){
            Member temp = (Member) obj;
            return memberId == temp.memberId;
        }
        return false;
    }

    public int hashCode(){
        return ((Integer)memberId).hashCode();
    }

    @Override
    public String toString() {
        return memberName+" 회원님의 아이디는 " + memberId + "입니다. ";
    }

    public static void main(String[] args) {
        Member m1 = new Member(1234, "홍길동");
        Member m2 = new Member(23, "이길동");
        System.out.println(m1.equals(m2));

    }
}
