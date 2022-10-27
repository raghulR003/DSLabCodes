import java.util.*;
public class qc9{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        ArrayList<Character> al1=new ArrayList<Character>(5);
        ArrayList<Character> al2=new ArrayList<Character>(5);
        System.out.println("Enter the two strings: ");
        String a=sc.next();
        int l1=a.length();
        String b=sc.next();
        int l2=b.length();
        if(l1==l2){
            for(int i=0;i<l1;i++){
                al1.add(a.charAt(i));
                al2.add(b.charAt(i));
            }
            //ArrayLists initialized
            al1.add(null);
            al2.add(null);
            int i=0;
            while(al1.get(i)!=null){
                int j=0;
                while(al2.get(j)!=null){
                    if(al1.get(i)==al2.get(j)){
                        al1.remove(i);
                        al2.remove(j);
                        break;
                    }
                    else{
                    j++;
                }
            }
            }
            if(al1.get(0)==null && al2.get(0)==null){
                System.out.println("It's an anagram!");
            }
            else{
                System.out.println("It's not an anagram!");
            }
        }
        else{
            System.out.println("Not an Anagram!");
            System.exit(0);
        }
    }
}