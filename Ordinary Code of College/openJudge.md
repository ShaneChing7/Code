## **统计m - n 之间质数的的个数**

使用埃氏筛法

先初始化n + 1长度的Boolean数组，把数组都初始化为true，都默认为质数

i = 2 开始，如果 i 为质数，则 j = i * i     j 一定为合数，j + i 也一定为合数，把他们都赋为false。

i <= (int) Math.sqrt(n) 可以减少判断次数，减少时间复杂度

最后再用一个for循环统计m - n 之间的质数的个数。

```java
class test10 {
    public static void main(String[] args) {
        System.out.println(countPrimes(10, 20));
    }

    public static int countPrimes(int m, int n) {
        boolean[] isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true);
        for (int i = 2; i <= (int) Math.sqrt(n); i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int ans = 0;
        for (int k = m; k < n; k++) {
            if (isPrime[k] == true) {
                ans++;
            }
        }
        return ans;
    }
}
```

## 十进制转化为二进制

```java
public class Main {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int x = sc.nextInt();
       String binary = Integer.toBinaryString(x);
       System.out.println(binary);
    }
}
```



## 大整数加法

**输入处理**：

- 使用 `replaceFirst("^0+", "")` 去除每个数字的前导 0。
- 如果输入全是前导 0，处理为空字符串时，将其置为 `"0"`。

**加法逻辑**：

- 从两个数字的末尾开始逐位相加。
- 用 `carry` 变量处理每一位的进位。
- 如果某个数字已经遍历完，则用 0 代替其位值。

**结果输出**：

- 通过 `StringBuilder` 反转结果字符串，并输出去除前导 0 的正确答案。

```java
public class 大整数加法 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 读取两行输入，并去除前导零
        String num1 = scanner.nextLine().replaceFirst("^0+", "");
        String num2 = scanner.nextLine().replaceFirst("^0+", "");

        // 如果去除前导零后为空字符串，则将其视为0
        if (num1.isEmpty()) num1 = "0";
        if (num2.isEmpty()) num2 = "0";

        // 使用 StringBuilder 来高效处理字符串拼接
        StringBuilder result = new StringBuilder();

        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;

        // 从两个字符串的末尾开始逐位相加
        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = 0;
            if (i >= 0) {
                digit1 = num1.charAt(i) - '0';
                i--;
            }

            int digit2 = 0;
            if (j >= 0) {
                digit2 = num2.charAt(j) - '0';
                j--;
            }

            int sum = digit1 + digit2 + carry;
            result.append(sum % 10); // 取出当前位的数字
            carry = sum / 10;       // 更新进位
        }

        // 将结果翻转并输出
        System.out.println(result.reverse().toString());

        scanner.close();
    }
}
```

`"^0+"` 是一个正则表达式，具体含义如下：

### 解释

1. **`^`**: 表示匹配字符串的开头。
   - 这是一个定位符，用来限定匹配必须从字符串的起始位置开始。
2. **`0+`**: 匹配一个或多个连续的数字 `0`。
   - `0` 表示匹配数字 0。
   - `+` 是量词，表示匹配前面的元素（即 `0`）至少一次，或更多次。

### 整体含义

`"^0+"` 表示：

- 匹配从字符串开头开始的所有连续的 `0`。

  

## 全排列

```java
public class Permutations {
	public static void main(String[] args) {
    	Scanner scanner = new Scanner(System.in);
    
    
    	// Input: A string of distinct lowercase letters
    	String input = scanner.nextLine();
    
    	// Convert the string to a character array for manipulation
    	char[] chars = input.toCharArray();
    
    	// Generate and print all permutations
    	permute(chars, 0, chars.length - 1);
    
    	scanner.close();
	}

	// Function to generate all permutations
	private static void permute(char[] chars, int left, int right) {
    	if (left == right) {
        	// Base case: one permutation completed
        	System.out.println(new String(chars));
    	} else {
        	for (int i = left; i <= right; i++) {
            	// Swap the current index with the left index
            	swap(chars, left, i);
            	// Recursively permute the remaining characters
            	permute(chars, left + 1, right);
            	// Backtrack: undo the swap
            	swap(chars, left, i);
        	}
    	}
	}

	// Utility function to swap two characters in an array
	private static void swap(char[] chars, int i, int j) {
    	char temp = chars[i];
    	chars[i] = chars[j];
    	chars[j] = temp;
	}
}
```


## 回溯法解N皇后

```java
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Solution method = new Solution();
            method.solveNQueens(n);
            if(method.count>0) {
                System.out.println(method.count);
            }else{
                System.out.println("No Solution!");
            }
        }

    }
    
    
class Solution {
    int count = 0;

    public void solveNQueens(int n) {
        char[][] chessboard = new char[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                chessboard[i][j] = '.';

        backtrack(chessboard, n, 0);

    }


    void backtrack(char[][] chessboard, int n, int row) {
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (check(chessboard, row,col, n)) {
                chessboard[row][col] = 'Q';
                backtrack(chessboard, n, row + 1);
                chessboard[row][col] = '.';
            }
        }

    }



    boolean check(char[][] chessboard, int row, int col, int n) {

        for (int i = 0; i < row; ++i) { // 剪枝
            if (chessboard[i][col] == 'Q') {
                return false;
            }
        }

        // 检查45度对角线
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }

        // 检查135度对角线
        for (int i = row - 1, j = col + 1; i >= 0 && j <= n - 1; i--, j++) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
}
```



## 骑士移动

```java
public class Main {
    public static void main(String[] args) {
        
        class Node {
            int x;
            int y;
            int p;

            Node(int x, int y, int p) {
                this.x = x;
                this.y = y;
                this.p = p;
            }
        }
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {

            int l = sc.nextInt();
            int begin_x = sc.nextInt();
            int begin_y = sc.nextInt();
            int final_x = sc.nextInt();
            int final_y = sc.nextInt();
            
            if (begin_x == final_x && begin_y == final_y) {
                ans.add(0); // 起点和终点相同，步数为0
                continue;
            }
            
            int[] u_d = new int[]{-2, -1, -1, -2, 1, 2, 1, 2};
            int[] l_r = new int[]{1, 2, -2, -1, -2, -1, 2, 1};
            boolean[][] visited = new boolean[l][l];
            Queue<Node> queue = new LinkedList<>();
            queue.add(new Node(begin_x, begin_y, 0));
            visited[begin_x][begin_y] = true;

            while (!queue.isEmpty()) {
                Node node = queue.poll();
                int x = node.x;
                int y = node.y;
                int p = node.p;
                if (node.x == final_x && node.y == final_y) {
                    ans.add(p); // 找到终点，记录步数
                    queue.clear(); // 停止BFS
                    break;
                }
                for (int k = 0; k < 8; k++) {
                    int curr_x = x + u_d[k];
                    int curr_y = y + l_r[k];
                    if (curr_x >= 0 && curr_x <= l - 1 && curr_y >= 0 && curr_y <= l - 1 && !visited[curr_x][curr_y]) {
                        queue.offer((new Node(curr_x, curr_y, p + 1)));
                        visited[curr_x][curr_y] = true;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.println(ans.get(i));
        }
    }
}
```

## 迷宫

```java
public class Main {
    public static void main(String[] args) {
        class Node {
            int x;
            int y;

            Node(int x, int y) {
                this.x = x;
                this.y = y;
            }
        }
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int l = sc.nextInt();
            sc.nextLine();

            int[][] map = new int[l][l];

            for (int row = 0; row < l; row++) {
                String line = sc.nextLine();
                for (int col = 0; col < l; col++) {
                    map[row][col] = (line.charAt(col) == '.') ? 0 : 1;
                }
            }
            //for (int[] row : map) {
            //    System.out.println(Arrays.toString(row));
            //}
            int begin_x = sc.nextInt();
            int begin_y = sc.nextInt();
            int final_x = sc.nextInt();
            int final_y = sc.nextInt();

            if(map[begin_x][begin_y] == 1 || map[final_x][final_y] == 1){
                System.out.println("NO");
                continue;
            }

            Queue<Node> queue = new LinkedList<>();
            queue.offer(new Node(begin_x, begin_y));
            boolean[][] visited = new boolean[l][l];
            visited[begin_x][begin_y] = true;
            
            int[] u_d = new int[]{-1, 1, 0, 0};//x
            int[] l_r = new int[]{0, 0, -1, 1};//y

            boolean found = false;
            while (!queue.isEmpty()) {
                Node node = queue.poll();
                int x = node.x;
                int y = node.y;
                if (x == final_x && y == final_y) {
                    found = true;
                    break;
                }
                for (int j = 0; j < 4; j++) {
                    int curr_x = x + u_d[j];
                    int curr_y = y + l_r[j];
                    if (curr_x >= 0 && curr_y >= 0 && curr_x <= l - 1 && curr_y <= l - 1
                            && !visited[curr_x][curr_y] && map[curr_x][curr_y] == 0) {
                            queue.offer(new Node(curr_x,curr_y));
                            visited[curr_x][curr_y] = true;
                    }
                }
            }
            System.out.println(found ? "YES" : "NO");
        }
    }
}
```