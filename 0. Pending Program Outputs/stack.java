import java.util.*;
public class stack{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the expression: ");
        String str=sc.nextLine();
        int len=str.length();
        int exp1[]=new int[len]; // for {}
        int exp2[]=new int[len]; // for []
        int exp3[]=new int[len]; // for ()
        // System.out.println("The length is: "+len);
        int i=0;
        int a=0,b=0,c=0;
        while(i<len){
            if(str.charAt(i)=='('){
                exp1[a]='(';
                a++;
            }
            else if(str.charAt(i)=='{'){
                exp2[b]='{';
                b++;
            }
            else if(str.charAt(i)=='['){
                exp3[c]='[';
                c++;
            }
            i++;
        }
        i=0;
        while(i<len){
            if(str.charAt(i)==')'){
                --a;
            }
            else if(str.charAt(i)=='}'){
                --b;
            }
            else if(str.charAt(i)==']'){
               --c;
            }
            i++;
        }
        if(a==0 && b==0 && c==0){
            System.out.println("The expression is balanced");
        }
        else{
            System.out.println("The expression is not balanced");
        }
    }
}