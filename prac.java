import java.util.*;
class solution{
    public static void main(String args[]){
  Scanner sc=new Scanner(System.in);
  List<Integer> li=new ArrayList<>();
  while(sc.hasNextInt()){
    li.add(sc.nextInt());
  }
  sc.close();
  for(int i=0;i<li.size();i++){
    System.out.print(li.get(i)+" ");
  }
    }
}