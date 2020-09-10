package myJavaProject;

public class Test1 {
	
	public static void main(String[] args) {
		// 声明变量，只能赋值一次
		final int finalBian;
		// 1字符串查找，获取字符首次出现的位置
		System.out.println("We are student".indexOf("e"));
		// 2字符串查找，获取字符最后一次出现的位置
		System.out.println("We are student".lastIndexOf("e"));
		// 3获取指定位置的字符
		System.out.println("We are student".charAt(5));
		// 4截取字符串，从某一位置截取到结尾
		System.out.println("We are student".substring(5));
		// 5截取字符串，从某一位置截取到某一位置
		System.out.println("We are student".substring(5,8));
		// 6字符替换
		System.out.println("We are student".replace("a","A"));
		// 判断字符串的开始和结束 startsWith endsWith
		// 判断2个字符串具有相同的字符和长度 equals
		System.out.println("abc".equals("ABC"));
		// 判断2个字符串具有相同 忽略大小写的情况下判断 equalsIgnoreCase
		System.out.println("abc".equalsIgnoreCase("ABC"));
		// 按字典的顺序比较2个字符串
		System.out.println("abc".compareTo("ABC"));
		// 大小写转换 toLowerCase() toUpperCase()
		// 字符分割 split(分隔符，次数) 可用正则表达式
		String[] strArray = "192.168.1.1".split("\\."); // 使用转义字符 //
		System.out.println();
		for (String a : strArray) {
			System.out.print("[" + a + "]");
		}
		System.out.println();
		// 正则表达式
		/*
			[^456] 4/5/6、之外的任何字符
			[a-r] a-r中任何字符
			[a-zA-Z]所有字符
			[a-e[g-z]]a到e或g-z中任何字符 并运算
			[a-o&&[def]]代表字母d、e、f 交运算
			[a-d&&[^bc]]代表a、d字母 差运算
			限定修饰符
			? 0次或1次
			* 0次或多次
			+ 一次或多次
			{n} 正好出现n次
			{n,} 至少出现n次
			{n,m} 出现2,3次
			匹配email格式
			\\w + @//w + (\\.\\w{2,3})*\\.\\w{2,3}
		*/
		// 字符操作 append insert delete
		// triangle();
	}

	// 输出菱形
	public static void triangle(){
		// 输出菱形 lineCount maxLineNum space star declineCount
		int lineCount = 5; //需要多少行
		int maxLineNum = (lineCount + 1) / 2;// 菱形最多一行
		for (int i = 1; i <= maxLineNum; i++) {// 循环菱形数量越来越多的几行
			for (int space = 1; space <= maxLineNum - i; space++) {// 输出空格，数量=最后一行-当前行数
				System.out.print(" ");
			}
			for (int star = 1; star <= (i * 2) - 1; star++) {// 输出星号，数量=行数*2-1
				System.out.print("*");
			}
			System.out.println();// 换行
		}

		int declineCount = lineCount - maxLineNum;// 计算剩下的几行，这几行星号的数量是递减的
		for (int i = 1; i <= declineCount; i++) {// 循环菱形数量越来越少的行数
			for (int space = 1; space <= i; space++) {// 输出空格，数量等于当前的行数
				System.out.print(" ");
			}
			for (int star = 1; star <= (declineCount - i + 1) * 2 - 1; star++) {// 输出星号，数量等于（总数-当前行数）*2-1
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
