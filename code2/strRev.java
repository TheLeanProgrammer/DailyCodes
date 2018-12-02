/*
 * strRev
 * author: Ashwek
 * github: @ashwek
 */

import java.lang.StringBuffer;

class strRev{

	public static void main(String args[]){
		String a = "Hello World";
		System.out.println("Orignal String = " + a);

		String rev = new StringBuffer(a).reverse().toString();
		System.out.println("Reverse String = " + rev);

	}
}
