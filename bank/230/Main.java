/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/298/
*/

import java.util.Scanner;
class Main
{ 
  public static void main(String[] args) 
  { 
    Scanner sr = new Scanner(System.in); 
                int n=sr.nextInt();
                int sum=0,nine=9,dist=0,len;   
                for(len=1; ;len++)  
                {  
                    sum+=nine * len;  
                    dist+=nine;  
                    if(sum>=n)  
                    {   
                        sum-=nine*len;  
                        dist-=nine;  
                        n-=sum;  
                        break;  
                    }  
                    nine*=10;  
                }    
                int diff=(int)(Math.ceil((double)(n)/(double)(len)));  
                int d=n%len;  
                if(d==0)  
                {
                    d=len;
                }  
                String str=Integer.toString(dist+diff); 
                System.out.println(str.charAt(d-1)); 
  } 
} 