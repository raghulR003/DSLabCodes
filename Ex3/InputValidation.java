import java.util.*;
public class InputValidation{
    public static void checkName(String str){
        int str_len=str.length();
        char chtemp,flag=0;
        for(int i=0;i<str_len;i++){
            chtemp=str.charAt(i);
            int ascii=(int)chtemp;
            if(ascii>=65&&ascii<=90 || ascii>=97&&ascii<=122 || ascii==46 || chtemp==' '){
                flag=1;
            }
            else{
                System.out.println("Invalid name! Please try again");
                break;
            }
        }
        if(flag==1){
            System.out.println("Name valid! Continue..");
        }
    }
    public static void checkPhno(String str){
        int str_len=str.length();
        if(str_len==10){
        char chtemp,flag=0;
        for(int i=0;i<str_len-1;i++){
            chtemp=str.charAt(i);
            int ascii=(int)chtemp;
            if(ascii>=48 && ascii<=57){
                flag=1;
            }
            else{
                System.out.println("Invalid phone number! Please try again");
                break;
            }
        }
        if(flag==1){
            System.out.println("Phone number valid! Continue..");
        }
    }
    else{
        System.out.println("Invalid number length!");
    }
}
    public static void main (String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Form Validation:\n");
        System.out.println("Enter your name:");
        String name=sc.next();
        System.out.println("\nEnter your phone number:");
        String phno=sc.next();
        System.out.println();
        InputValidation.checkName(name);
        InputValidation.checkPhno(phno);
    }
}