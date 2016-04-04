package calculatorApi;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class AddNumbers {
	String s1;
	String s2;

	public String getOp1() {
		return s1;
	}
	public void setOp1(String op1) {
		this.s1 = op1;
	}
	public AddNumbers(String op1, String op2) {
		super();
		this.s1 = op1;
		this.s2 = op2;
	}
	public String getOp2() {
		return s2;
	}
	public void setOp2(String op2) {
		this.s2 = op2;
	}
	
	public String AddSum()
	{
		int count = 0;
		int carry = 0;
		int sum = 0;
		// TODO Auto-generated method stub
		LinkedList<String> list1 = new LinkedList<String>();
		LinkedList<String> list2 = new LinkedList<String>();
		LinkedList<String> list3 = new LinkedList<String>();

		for (int i = s1.length() - 1; i >= 0; i--) {
			list1.add(s1.charAt(i) + "");
		}
		for (int i = s2.length() - 1; i >= 0; i--) {
			list2.add(s2.charAt(i) + "");
		}

		if (list1.size() > list2.size()) {
			count = list1.size();
		} else {
			count = list2.size();
		}

		int loopVar = 0;
		while (loopVar != count) {
			int op1, op2;
			sum = 0;

			if (loopVar < list1.size()) {
				op1 = Integer.parseInt((String) list1.get(loopVar));
				sum += op1;
			}
			if (loopVar < list2.size()) {
				op2 = Integer.parseInt((String) list2.get(loopVar));
				sum += op2;
			}

			sum += carry;

			carry = sum / 10;
			list3.add((sum % 10) + "");
			// System.out.println(sum+"->"+op1+" + "+op2);
			loopVar++;
		}
		if (carry != 0) {
			list3.add(carry + "");
		}

		String result = "";
		Iterator<String> itr = list3.iterator();
		while (itr.hasNext()) {
			result = itr.next() + result;
		}

		return result;

	}
}
