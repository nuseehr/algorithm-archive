import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/***********************************
 *  2022. 05. 11
 *  10798
 *  세로읽기 B1
 **********************************/
public class Main {
    public static void main(String[] args) throws IOException{
        /* 입력받기 위한 객체 BufferedReader 선언 */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        /* 이중 배열 선언 */
        char[][] ch = new char[5][15];
        /* 이중 배열의 가로 길이 */
        int max = 0;

        /* 입력받고 세팅을 위한 for문 */
        for (int i=0; i<ch.length; i++) {
            /* 입력한 1줄을 String객체에 저장 */
            String str = br.readLine();
            if(max < str.length()) max = str.length();
            for (int j=0; j<str.length(); j++) {
                ch[i][j] = str.charAt(j);
            }
        }

        /* String 덧셈연산을 다루기 위한 객체 StringBuilder 선언 */
        StringBuilder sb = new StringBuilder();
        for (int i=0; i<max; i++) {
            for (int j=0; j<5; j++) {
                if(ch[j][i] == '\0') continue;
                sb.append(ch[j][i]);
            }
        }
        System.out.println(sb);
    }
}
