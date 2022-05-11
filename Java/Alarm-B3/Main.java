import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/***********************************
 *  2022. 05. 11
 *  2884
 *  알람시계 B3
 **********************************/
public class Main {
    public static void main(String[] args) throws IOException{
        /* 입력받기 위한 객체 BufferedReader 선언 */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int hour = Integer.parseInt(st.nextToken());
        int minute = Integer.parseInt(st.nextToken());
        int mid = 60;
        if (minute >= 0 && minute < 45) {
            minute = mid + (minute - 45);
            hour -= 1;
            if (hour < 0) hour = 23;
        } else {
            minute -= 45;
        }
        System.out.println(hour + " " + minute);
    }
}
