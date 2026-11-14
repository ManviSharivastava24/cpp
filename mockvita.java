import java.util.*
public class Main{
static int N,N,rodRow=-1,rodCol=-1;
static char[][]g;
static boolean isCable(int x,int c){
if(r<0||r>=N||c<0||c>=N) return false;
if(g[r][c]=='R'){
return (rodRow !=-1) 
        ? (r>0 && g[r-1][c]=='C')||(r+1<N &&g[r+1][c]=='C');
        (c>0 && g[r][c-1]=='C') || (c+1 <M && g[r][c+1]=='C');
}
return false;
}
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
if(!sc.hasNextInt()) return ;
N=sc.nextInt();
M=sc.nextInt();
g=new char[N][M];
for(int i=0;i<N;i++){
for(int j=0;j<M;j++){
g[i][j]=sc.next.charAt(0);
}
}
for(int i=0;i<N;i++){
boolean full=true,hasR=false;
for(int j=0;j<M;j++){
if(g[i][j]=='.') full=false;
if(g[i][j]=='R') hasR=true;
}
if(full&&hasR) {rodRow=i;break;}

}
if(rodrow=-1){
for(int j=0;j<M;j++){
boolean full=true;hasR=false;
for(int i=0;i<N;i++){
if(g[i][j]=='.'){
full=false;
}
if(g[i][j]=='R') hasR=true;
}
if(full&& hasR) {rodCol=j;break;}
}
}
int sr=-1;
scStart=-1;
int[] dr={-1,1,0,0};
int[] dc={0,0,-1,1};
for(int i=0;i<N&&sr==-1;i++){
for(int j=0;j<M;j++){
if(i==0||i==N-1||j==0||j==M-1)&&g[i][j]=='C){
int deg=0;
for(int d=0;d<4;d++){
if((i==0||i==N-1||j==0||j==M-1)&&g[i][j]=='C'){
int deg=0;
for(int d=0;d<4;d++)
if(isCable(i+dr[d],j+dc[d])) deg++;
if(deg==1) {sr=i;scStart=j;break;}
}
}
}
int pr=-1,pc=-1,r=sr,c=scStart,sum=0;
while(true){
int nr=-1,n=-1;
for(int d=0;d<4;d++){
int tr=r+dr[d],tc=c+dc[d];
if((tr!=pr|| tc!=pc) &&isCable(tr,tc)){
nr=tr;
nc=tc;
break;
}
}
if(nr=-1) break;
if(rodRow!=-1&& nr==rodRow){
sum+=((nr>r)?1:-1)*((g[nr][nc]=='C') ?1:-1);
}else if(rodCol!=-1 &&nc==rodCol){
sum+=((nc>c) ?1:-1)* ((g[nr][nc]=='C')?1:-1);
}
pr=r;
pc=c;
r=nr;
c=nc;
}
System.out.println(Math.abs(sum)/2);
}
}