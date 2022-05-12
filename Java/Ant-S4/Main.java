import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/***********************************
 *  2022. 05. 12
 *  3048
 *  개미 S4
 **********************************/
public class Main {
    public static void main(String[] args) throws IOException{
        /* 입력받기 위한 객체 BufferedReader 선언 */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N1 = Integer.parseInt(st.nextToken());
        int N2 = Integer.parseInt(st.nextToken());
        String S1 = br.readLine();
        char A1[] = new char[N1];
        for (int i=S1.length()-1; i>=0; i--) A1[S1.length()-1-i] = S1.charAt(i);
        char A2[] = br.readLine().toCharArray();

        char Ants[] = new char[N1+N2];
        int Dir[] = new int[N1+N2];

        for(int i=0; i<N1; i++) {
            Ants[i] = A1[i];
            Dir[i] = 1;
        }

        for(int i=N1; i<N1+N2; i++) {
            Ants[i] = A2[i-N1];
            Dir[i] = 2;
        }

        int T = Integer.parseInt(br.readLine());

        while (T>0) {
            T--;
            for(int i=0; i<N1+N2-1; i++) {
                if(Dir[i]==1 && Dir[i+1]==2) {
                    char Temp = Ants[i];
                    Ants[i] = Ants[i+1];
                    Ants[i+1] = Temp;
                    int TempDir = Dir[i];
                    Dir[i] = Dir[i+1];
                    Dir[i+1] = TempDir;
                    i++;
                }
            }
        }

        StringBuffer sb = new StringBuffer();
        for(int i=0; i<N1+N2; i++) sb.append(Ants[i]);
        System.out.println(sb.toString());
    }
}
