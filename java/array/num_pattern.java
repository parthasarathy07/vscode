 class pattern {
  public static void main(String[] args) {
    
    for (int i = 1; i <= 4; i++) {
      
      for (int j = i; j <=i+4; j++) {
       
        System.out.print(j); 
      }
      System.out.print("\n");
    } 
  }
}

/* 12345
   23456
   34567
   45678*/
