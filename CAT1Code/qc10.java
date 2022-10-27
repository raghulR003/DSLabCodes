import java.util.*;
public class qc10{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> al=new ArrayList<Integer>(5);
        System.out.println("Enter the number of rows and columns: ");
        int r=sc.nextInt();
        int c=sc.nextInt();
        int temp=0;
        if(r==c){
            int arr[][]=new int[r][c];
            System.out.println("\nEnter elements rowwise: ");
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    temp=sc.nextInt();
                    arr[i][j]=temp;
                }
            }
            for(int i=0;i<c;i++){
                int uni=arr[0][i];
                int count=0;
                for(int j=0;j<c;j++){
                    if(uni==arr[0][j]){
                        count++;
                    }
                }
                if(count==1){
                    al.add(uni);
                }
            }
            System.out.println(al);
            //Now al contains the list of all integers unique in row 1
            System.out.println("\nThe unique elements are: ");
            int count=0,row_count=0;
            for(int i=0;i<al.size();i++){
                for(int k=0;k<r;k++){
                    for(int l=0;l<c;l++){
                        if(al.get(i)==arr[k][l]){
                            count++;
                        }
                    }
                    System.out.println(count);
                    if(count==1){
                        row_count=0;
                    }
                    else{
                        row_count=1;
                    }
                }
                if(count==r && row_count==0){
                    System.out.println(al.get(i)+"***");
                }
                row_count=0;
            }
        }
        else{
            System.out.println("Wrong input!");
            System.exit(0);
        }
    }
}