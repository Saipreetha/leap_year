package array;
import java.util.*;
import java.util.Scanner;
public class power {public static void main(String[] args)
	{
	int num,pow,temp=1;
	Scanner scan=new Scanner(System.in); 
	num=scan.nextInt();
	pow=scan.nextInt();
	for(int i=0;i<pow;i++)
	{
		temp=temp*num;
	}
	System.out.println(temp);
	}

}
