import java.util.*;
public class qb1 {
    static int stack[]=new int[50];
    static int top=-1;
    static void push(String string){
        int val=Integer.parseInt(string);
        top++;
        stack[top]=val;
    }
    static int pop(){
        int val;
        val=stack[top];
        top--;
        System.out.println("Pop value: "+val);
        return val;
    }
    static void evaluate(char ch,int a,int b){
        switch(ch){
            case '+':push(Integer.toString(a+b));
            case '-':push(Integer.toString(a-b));
            case '*':push(Integer.toString(a*b));
            case '/':push(Integer.toString(a/b));
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the expression: ");
        String exp=sc.next();
        for(int i=0;i<exp.length();i++){
            System.out.println("Test "+String.valueOf(exp.charAt(i)));
            if(exp.charAt(i)>'0' && exp.charAt(i)<='9'){
                //It's a digit
                System.out.println("Test "+String.valueOf(exp.charAt(i)));
                push(String.valueOf(exp.charAt(i)));
            }
            else{
                //It's an operator
                int op1=pop();
                int op2=pop();
                System.out.println("Test "+op1+" "+op2+" "+exp.charAt(i));
                evaluate(exp.charAt(i), op2, op1);
            }
        }
        int x=pop();
        System.out.println("The final value is: "+x);
    }
}
