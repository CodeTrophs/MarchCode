import java.util.*;

public class JatinSaini664{
    public static String convertFirstLetter(String s){
        s = ' '+s;
        String ans="";
        int i=0, a=0;
        while(i<s.length()){
            if(s.charAt(i)==' '){
                ans+=s.charAt(i);
                a=0;
            }
            else if(s.charAt(i)!=' '){
                if(a==0&&s.charAt(i)>='a'&&s.charAt(i)<='z'){
                    ans+=(char)(s.charAt(i)-32);
                    a++;
                }else{
                    ans+=s.charAt(i);
                    a++;
                }
            }
            i++;
        }
        return ans.substring(1);
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        String s;
        s = scn.nextLine();
        System.out.println(convertFirstLetter(s));
    }
}
