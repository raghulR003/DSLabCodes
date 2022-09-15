import java.util.*;
public class StringSorting {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of string values: ");
        int num=sc.nextInt();
        String[] str_array=new String[num];
        System.out.println("Enter the string values now: ");
        for(int i=0;i<num;i++){
            str_array[i]=sc.next();
        }
        //Sorting process
        int[] finallength=new int[num];
        for(int i=0;i<num;i++){
            finallength[i]=str_array[i].length();
        }
        String temp;
        for(int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                if(str_array[i].length()>=str_array[j].length()){
                    temp=str_array[j];
                    str_array[j]=str_array[i];
                    str_array[i]=temp;
                }
            }
        }
        System.out.println();
        for(int i=num-1;i>=0;i--){
            System.out.print(str_array[i]+" ");
        }
        }
    }
