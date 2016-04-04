import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

import calculatorApi.AddNumbers;

public class LinkedListSum {

	public static void main(String[] args) {

		AddNumbers addNum = new AddNumbers("1235345456456456465",
				"7454564564564");
		String sum = addNum.AddSum();
		System.out.println(sum);
	}
}