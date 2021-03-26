import java.util.*;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i]=scn.nextInt();
        }
        
        Arrays.sort(a);

        System.out.print(a[0]+" ");
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1])
                System.out.print(a[i]+" ");
        }
    }
}