import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/***********************************
 *  2022. 05. 11
 *  2490
 *  윷놀이 B3
 **********************************/
public class Main {
    public static void main(String[] args) throws IOException{
        /* 입력받기 위한 객체 BufferedReader 선언 */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] yut = {"E", "A", "B", "C", "D"};

        for (int i=0; i<3; i++) {
            int back = 0;
            /* StringTokenizer를 통해 분리된 문자열을 불러올 수 있도록 한다. */
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j=0; j<4; j++) {
                back += Integer.parseInt(st.nextToken());
            }
            System.out.println(yut[4-back]);
        }
    }
}
